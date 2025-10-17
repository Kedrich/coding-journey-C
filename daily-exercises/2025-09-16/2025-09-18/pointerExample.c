#include <stdio.h>

int main(void) 
{
    // ========================================
    // PART 1: Basic Variables (No Pointers)
    // ========================================
    
    printf("=== PART 1: Basic Variables ===\n");
    
    int x = 42;  // Create a variable x with value 42
    
    printf("Value of x: %d\n", x);
    printf("Address of x: %p\n", &x);  // & means "address of"
    
    // ========================================
    // PART 2: Creating and Using Pointers
    // ========================================
    
    printf("\n=== PART 2: Basic Pointers ===\n");
    
    int *ptr;        // Declare a pointer to int (just an empty container)
    ptr = &x;        // Store the address of x in ptr
    
    printf("Value of x: %d\n", x);
    printf("Address of x: %p\n", &x);
    printf("Value stored in ptr: %p\n", ptr);      // Address that ptr holds
    printf("Value ptr points to: %d\n", *ptr);     // * means "go to that address"
    
    // ========================================
    // PART 3: Modifying Through Pointers
    // ========================================
    
    printf("\n=== PART 3: Modifying Through Pointers ===\n");
    
    printf("Before: x = %d\n", x);
    
    *ptr = 100;  // Change the value at the address ptr points to
    
    printf("After using *ptr = 100:\n");
    printf("x = %d\n", x);            // x changed even though we didn't touch x directly!
    printf("*ptr = %d\n", *ptr);      // Same value
    
    // ========================================
    // PART 4: Multiple Pointers to Same Variable
    // ========================================
    
    printf("\n=== PART 4: Multiple Pointers ===\n");
    
    int *ptr2 = &x;  // Another pointer to the same variable
    
    printf("x = %d\n", x);
    printf("*ptr = %d\n", *ptr);
    printf("*ptr2 = %d\n", *ptr2);
    
    *ptr2 = 999;  // Change through ptr2
    
    printf("\nAfter *ptr2 = 999:\n");
    printf("x = %d\n", x);        // Changed!
    printf("*ptr = %d\n", *ptr);  // Also shows 999
    printf("*ptr2 = %d\n", *ptr2); // Also shows 999
    
    // ========================================
    // PART 5: Arrays and Pointers
    // ========================================
    
    printf("\n=== PART 5: Arrays and Pointers ===\n");
    
    int arr[5] = {10, 20, 30, 40, 50};
    int *arrPtr = arr;  // arr is automatically the address of first element
    
    printf("First element: arr[0] = %d\n", arr[0]);
    printf("Same thing: *arrPtr = %d\n", *arrPtr);
    
    printf("\nUsing pointer arithmetic:\n");
    for(int i = 0; i < 5; i++) {
        printf("arr[%d] = %d, *(arrPtr + %d) = %d\n", 
               i, arr[i], i, *(arrPtr + i));
    }
    
    return 0;
}

// ========================================
// PART 6: Function Examples
// ========================================

// Function that tries to modify a value (WON'T WORK)
void tryToChange(int num) {
    printf("\n=== Inside tryToChange ===\n");
    printf("Received: %d\n", num);
    num = 999;
    printf("Changed to: %d\n", num);
}

// Function that actually modifies a value (WORKS!)
void actuallyChange(int *numPtr) {
    printf("\n=== Inside actuallyChange ===\n");
    printf("Received address: %p\n", numPtr);
    printf("Value at that address: %d\n", *numPtr);
    *numPtr = 777;
    printf("Changed value to: %d\n", *numPtr);
}

// Uncomment and call these functions to see the difference!