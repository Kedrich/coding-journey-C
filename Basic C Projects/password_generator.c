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
} ValidationResult;

typedef struct {
    char* uppercase;
    char* lowercase;
    char* numbers;
    char* special;
    char* all_chars;
} CharacterSets;

int generate_password_flow(int length, PasswordOptions options, char output[]);
ValidationResult validate_inputs(int length, PasswordOptions options);
CharacterSets build_character_sets(PasswordOptions options);
char get_secure_random_char(char* char_set);
void secure_array_shuffle(char array[], int length);
void handle_errors(int error_code);
PasswordStrength calculate_strength(char* password);  
void display_menu();                              


int main(void)
{



    return 0;
}

int generate_password_flow(int length, PasswordOptions options, char output[])
{
    
    ValidationResult validation_result = validate_inputs(length, options);
    if (validation_result.is_valid == false)
    {
        return -1;
    }

    CharacterSets character_sets = build_character_sets(options);
    if (character_sets.all_chars == NULL || strlen(character_sets.all_chars) == 0)
    {
        return -2;
    }

    char password_array[129] = {0};
    int position = 0;

    if (options.include_uppercase && character_sets.uppercase != NULL)
    {
        password_array[position++] = get_secure_random_char(character_sets.uppercase); 
    }

    if (options.include_lowercase && character_sets.lowercase != NULL)
    {
        password_array[position++] = get_secure_random_char(character_sets.lowercase);
    }

    if (options.include_numbers && character_sets.numbers != NULL)
    {
        password_array[position++] = get_secure_random_char(character_sets.numbers);
    }

    if (options.include_special && character_sets.special != NULL)
    {
        password_array[position++] = get_secure_random_char(character_sets.special);
    }

    while (position < length)
    {
        char random_char = get_secure_random_char(character_sets.all_chars);

        if (options.no_repeated_chars)
        {
            bool duplicate_found = false;
            for (i = 0; i < position; i++)
            {
                if (password_array[i] == random_char)
                {
                    duplicate_found = true;
                    break;
                }
            }
            if (duplicate_found)
            {
                continue;
            }
        }
        password_array[position] = random_char;
        position++;
    }

    secure_array_shuffle(password_array, length);

    password_array[length] = '\0';
    strcpy(output, password_array);

    return 0;
}


ValidationResult validate_inputs(int length, PasswordOptions options)
{
    ValidationResult result;

    if (length < 4 || length > 128)
    {
        result.is_valid = false;
        result.error_message = "Length must be between 4-128";
        return result;
    }

    int selected_count = 0;
    if (options.include_uppercase)
    {
        selected_count++;
    }
    if (options.include_lowercase)
    {
        selected_count++;
    }
    if (options.include_numbers)
    {
        selected_count++;
    }
    if (options.include_special)
    {
        selected_count++;
    }

    if (selected_count == 0)
    {
        result.is_valid = false;
        result.error_message = "Must select at least one character type";
        return result;
    }

    if (length < selected_count)
    {
        result.is_valid = false;
        result.error_message = "Length too short for selected requirements";
        return result;
    }

    result.is_valid = true;
    result.error_message = "";

    return result;
}



void handle_errors(int error_code)
{
    switch (error_code)
    {
    case -1:
        printf("Validation error occured");
        break;
    case -2:
        printf("No character sets available");
        break;
    case -3:
        printf("Memory allocation failed");
        break;
    default:
        printf("Unknown error occured");
        break;
    }
}
