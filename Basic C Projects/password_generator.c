#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>


typedef struct {
    bool include_uppercase;
    bool include_lowercase;
    bool include_numbers;
    bool include_special;
    bool no_repeated_chars;
} PasswordOptions;

typedef struct {
    bool is_valid;
    int error_code;
    char error_message[256];
} ValidationResult;

typedef struct {
    char* uppercase;
    char* lowercase;
    char* numbers;
    char* special;
    char* all_chars;
    int set_count;
} CharacterSets;

typedef struct {
    int score;
    char level[16];
    char color[8];
} PasswordStrength;


int generate_password_flow(int length, PasswordOptions options, char output[]);
ValidationResult validate_inputs(int length, PasswordOptions options);
CharacterSets build_character_sets(PasswordOptions options);
char get_secure_random_char(char* char_set);
void secure_array_shuffle(char array[], int length);
void handle_errors(int error_code);
PasswordStrength calculate_strength(char* password);
void display_menu();
PasswordOptions get_user_options();
void display_password_result(char* password, PasswordStrength strength);
void free_character_sets(CharacterSets* sets);

int main(void)
{

    srand((unsigned int)time(NULL));

    PasswordOptions options = {true, true, true, false, false};
    char password[129];
    int choice, length;
    
    printf("Welcome to Secure Password Generator!\n");
    
    while (1) {
        display_menu();
        
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number.\n");
            while (getchar() != '\n'); 
            continue;
        }
        
        switch (choice) {
            case 1: 
                printf("Enter password length (4-128): ");
                if (scanf("%d", &length) != 1) {
                    printf("Invalid length input.\n");
                    while (getchar() != '\n');
                    break;
                }
                
                int result = generate_password_flow(length, options, password);
                if (result == 0) {
                    PasswordStrength strength = calculate_strength(password);
                    display_password_result(password, strength);
                } else {
                    handle_errors(result);
                }
                break;
                
            case 2:
                options = get_user_options();
                printf("Options updated successfully!\n");
                break;
                
            case 3:
                printf("Thank you for using Password Generator. Goodbye!\n");
                return 0;
                
            default:
                printf("Invalid choice. Please try again.\n");
        }
        
        printf("\nPress Enter to continue...");
        while (getchar() != '\n'); 
        getchar(); /
    }
    
    return 0;
}

int generate_password_flow(int length, PasswordOptions options, char output[])
{
    ValidationResult validation_result = validate_inputs(length, options);
    if (!validation_result.is_valid) {
        return validation_result.error_code;
    }

    CharacterSets character_sets = build_character_sets(options);
    if (character_sets.all_chars == NULL || strlen(character_sets.all_chars) == 0) {
        free_character_sets(&character_sets);
        return -2;
    }

    char password_array[129] = {0};
    int position = 0;

    if (options.include_uppercase && character_sets.uppercase != NULL) {
        password_array[position++] = get_secure_random_char(character_sets.uppercase); 
    }

    if (options.include_lowercase && character_sets.lowercase != NULL) {
        password_array[position++] = get_secure_random_char(character_sets.lowercase);
    }

    if (options.include_numbers && character_sets.numbers != NULL) {
        password_array[position++] = get_secure_random_char(character_sets.numbers);
    }

    if (options.include_special && character_sets.special != NULL) {
        password_array[position++] = get_secure_random_char(character_sets.special);
    }

    while (position < length) {
        char random_char = get_secure_random_char(character_sets.all_chars);

        if (options.no_repeated_chars) {
            bool duplicate_found = false;
            for (int i = 0; i < position; i++) {
                if (password_array[i] == random_char) {
                    duplicate_found = true;
                    break;
                }
            }
            if (duplicate_found) {
                continue;
            }
        }
        password_array[position] = random_char;
        position++;
    }

    secure_array_shuffle(password_array, length);

    password_array[length] = '\0';
    strcpy(output, password_array);

    free_character_sets(&character_sets);
    
    return 0;
}

ValidationResult validate_inputs(int length, PasswordOptions options)
{
    ValidationResult result;

    if (length < 4 || length > 128) {
        result.is_valid = false;
        result.error_code = -1;
        strcpy(result.error_message, "Length must be between 4-128");
        return result;
    }

    int selected_count = 0;
    if (options.include_uppercase) selected_count++;
    if (options.include_lowercase) selected_count++;
    if (options.include_numbers) selected_count++;
    if (options.include_special) selected_count++;

    if (selected_count == 0) {
        result.is_valid = false;
        result.error_code = -4;
        strcpy(result.error_message, "Must select at least one character type");
        return result;
    }

    if (length < selected_count) {
        result.is_valid = false;
        result.error_code = -5;
        strcpy(result.error_message, "Length too short for selected requirements");
        return result;
    }

    result.is_valid = true;
    result.error_code = 0;
    strcpy(result.error_message, "");

    return result;
}

CharacterSets build_character_sets(PasswordOptions options)
{
    CharacterSets sets;
    sets.set_count = 0;
    

    sets.uppercase = NULL;
    sets.lowercase = NULL;
    sets.numbers = NULL;
    sets.special = NULL;
    sets.all_chars = NULL;
    

    char base_upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char base_lower[] = "abcdefghijklmnopqrstuvwxyz";
    char base_numbers[] = "0123456789";
    char base_special[] = "!@#$%^&*()_+-=[]{}|;:,.<>?";
    

    sets.all_chars = (char*)malloc(200 * sizeof(char));
    if (sets.all_chars == NULL) return sets;
    sets.all_chars[0] = '\0';
    

    if (options.include_uppercase) {
        sets.uppercase = (char*)malloc((strlen(base_upper) + 1) * sizeof(char));
        if (sets.uppercase != NULL) {
            strcpy(sets.uppercase, base_upper);
            strcat(sets.all_chars, base_upper);
            sets.set_count++;
        }
    }
    
    if (options.include_lowercase) {
        sets.lowercase = (char*)malloc((strlen(base_lower) + 1) * sizeof(char));
        if (sets.lowercase != NULL) {
            strcpy(sets.lowercase, base_lower);
            strcat(sets.all_chars, base_lower);
            sets.set_count++;
        }
    }
    
    if (options.include_numbers) {
        sets.numbers = (char*)malloc((strlen(base_numbers) + 1) * sizeof(char));
        if (sets.numbers != NULL) {
            strcpy(sets.numbers, base_numbers);
            strcat(sets.all_chars, base_numbers);
            sets.set_count++;
        }
    }
    
    if (options.include_special) {
        sets.special = (char*)malloc((strlen(base_special) + 1) * sizeof(char));
        if (sets.special != NULL) {
            strcpy(sets.special, base_special);
            strcat(sets.all_chars, base_special);
            sets.set_count++;
        }
    }
    
    return sets;
}

char get_secure_random_char(char* char_set)
{
    if (char_set == NULL || strlen(char_set) == 0) {
        return '\0';
    }
    
    int set_length = strlen(char_set);
    int random_index = rand() % set_length;
    return char_set[random_index];
}

void secure_array_shuffle(char array[], int length)
{

    for (int i = length - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        

        char temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
}

PasswordStrength calculate_strength(char* password)
{
    PasswordStrength strength;
    strength.score = 0;
    
    int length = strlen(password);
    

    if (length >= 8) strength.score++;
    if (length >= 12) strength.score++;
    if (length >= 16) strength.score++;

    bool has_upper = false, has_lower = false, has_numbers = false, has_special = false;
    
    for (int i = 0; i < length; i++) {
        char c = password[i];
        if (c >= 'A' && c <= 'Z') has_upper = true;
        else if (c >= 'a' && c <= 'z') has_lower = true;
        else if (c >= '0' && c <= '9') has_numbers = true;
        else has_special = true;
    }
    
    if (has_upper) strength.score++;
    if (has_lower) strength.score++;
    if (has_numbers) strength.score++;
    if (has_special) strength.score += 2;
    

    if (strength.score <= 3) {
        strcpy(strength.level, "Weak");
        strcpy(strength.color, "red");
    } else if (strength.score <= 6) {
        strcpy(strength.level, "Medium");
        strcpy(strength.color, "orange");
    } else if (strength.score <= 8) {
        strcpy(strength.level, "Strong");
        strcpy(strength.color, "green");
    } else {
        strcpy(strength.level, "Very Strong");
        strcpy(strength.color, "green");
    }
    
    return strength;
}

void display_menu()
{
    printf("\n=== Password Generator Menu ===\n");
    printf("1. Generate Password\n");
    printf("2. Configure Options\n");
    printf("3. Exit\n");
    printf("Enter your choice (1-3): ");
}

PasswordOptions get_user_options()
{
    PasswordOptions options;
    char choice;
    
    printf("\n=== Configure Password Options ===\n");
    
    printf("Include uppercase letters (A-Z)? (y/n): ");
    scanf(" %c", &choice);
    options.include_uppercase = (choice == 'y' || choice == 'Y');
    
    printf("Include lowercase letters (a-z)? (y/n): ");
    scanf(" %c", &choice);
    options.include_lowercase = (choice == 'y' || choice == 'Y');
    
    printf("Include numbers (0-9)? (y/n): ");
    scanf(" %c", &choice);
    options.include_numbers = (choice == 'y' || choice == 'Y');
    
    printf("Include special characters (!@#$...)? (y/n): ");
    scanf(" %c", &choice);
    options.include_special = (choice == 'y' || choice == 'Y');
    
    printf("No repeated characters? (y/n): ");
    scanf(" %c", &choice);
    options.no_repeated_chars = (choice == 'y' || choice == 'Y');
    
    return options;
}

void display_password_result(char* password, PasswordStrength strength)
{
    printf("\n=== Generated Password ===\n");
    printf("Password: %s\n", password);
    printf("Length: %d characters\n", (int)strlen(password));
    printf("Strength: %s (Score: %d/10)\n", strength.level, strength.score);
    printf("========================\n");
}

void free_character_sets(CharacterSets* sets)
{
    if (sets->uppercase) {
        free(sets->uppercase);
        sets->uppercase = NULL;
    }
    if (sets->lowercase) {
        free(sets->lowercase);
        sets->lowercase = NULL;
    }
    if (sets->numbers) {
        free(sets->numbers);
        sets->numbers = NULL;
    }
    if (sets->special) {
        free(sets->special);
        sets->special = NULL;
    }
    if (sets->all_chars) {
        free(sets->all_chars);
        sets->all_chars = NULL;
    }
}

void handle_errors(int error_code)
{
    printf("\n=== ERROR ===\n");
    switch (error_code) {
        case -1:
            printf("Validation error: Invalid password length\n");
            break;
        case -2:
            printf("Error: No character sets available\n");
            break;
        case -3:
            printf("Error: Memory allocation failed\n");
            break;
        case -4:
            printf("Error: Must select at least one character type\n");
            break;
        case -5:
            printf("Error: Password length too short for selected requirements\n");
            break;
        default:
            printf("Unknown error occurred (Code: %d)\n", error_code);
            break;
    }
    printf("============\n");
}