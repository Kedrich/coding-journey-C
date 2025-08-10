#include <stdio.h>

// GLOBAL VARIABLES - visible everywhere in the program
int a, b;  // Both initialized to 0 automatically

void print() {
    // This function can ONLY see global variables a and b
    // Because it doesn't declare any local variables with same names
    printf("%d %d", a, b);  // Always prints GLOBAL a and GLOBAL b
}

int fun1() {
    // LOCAL VARIABLES - only visible inside this function
    int a, c;  // Declares LOCAL variables a and c
    
    // Now we have:
    // - LOCAL a (shadows/hides the global a)
    // - GLOBAL b (no local b declared, so we see global)
    // - LOCAL c
    
    a = 0;  // Sets LOCAL a to 0 (global a remains unchanged)
    b = 1;  // Sets GLOBAL b to 1 (no local b exists)
    c = 2;  // Sets LOCAL c to 2
    
    return c;  // Returns the value of LOCAL c, which is 2
    
    // When function ends, LOCAL a and LOCAL c are destroyed
}

void fun2() {
    // LOCAL VARIABLE
    int b;  // Declares LOCAL variable b
    
    // Now we have:
    // - GLOBAL a (no local a declared, so we see global)
    // - LOCAL b (shadows/hides the global b)
    
    a = 3;  // Sets GLOBAL a to 3 (no local a exists)
    b = 4;  // Sets LOCAL b to 4 (global b remains unchanged)
    
    print();  // Calls print() function
    
    // When function ends, LOCAL b is destroyed
}

int main() {
    printf("=== STEP BY STEP EXECUTION ===\n\n");
    
    // INITIAL STATE
    printf("STEP 1 - Initial state:\n");
    printf("Global a = %d, Global b = %d\n\n", a, b);
    
    // CALL fun1()
    printf("STEP 2 - Calling fun1():\n");
    printf("Before fun1(): Global a = %d, Global b = %d\n", a, b);
    
    int c = fun1();  // This calls fun1() and stores return value in c
    
    printf("After fun1(): Global a = %d, Global b = %d\n", a, b);
    printf("fun1() returned: %d\n\n", c);
    
    // CALL fun2()
    printf("STEP 3 - Calling fun2():\n");
    printf("Before fun2(): Global a = %d, Global b = %d\n", a, b);
    
    printf("fun2() calls print(), which outputs: ");
    fun2();  // This calls fun2(), which calls print()
    printf("\n");
    
    printf("After fun2(): Global a = %d, Global b = %d\n\n", a, b);
    
    return 0;
}

/*
DETAILED EXPLANATION OF VARIABLE SCOPING:

=== WHAT IS VARIABLE SCOPING? ===
- Scoping determines which variables are "visible" or accessible in different parts of code
- When a local variable has the same name as a global variable, the local one "shadows" (hides) the global one
- Inside a function, if you use a variable name:
  1. First check: Is there a LOCAL variable with this name? If yes, use it.
  2. If no local variable exists, then use the GLOBAL variable with that name.

=== STEP-BY-STEP ANALYSIS ===

INITIAL STATE:
- Global a = 0 (auto-initialized)
- Global b = 0 (auto-initialized)

STEP 1: fun1() is called
┌─────────────────────────────┐
│ fun1() scope                │
│ ┌─────────────────────────┐ │
│ │ int a, c;  ← LOCAL      │ │
│ │ a = 0;     ← LOCAL a    │ │
│ │ b = 1;     ← GLOBAL b   │ │  (no local b declared)
│ │ c = 2;     ← LOCAL c    │ │
│ │ return c;  ← returns 2  │ │
│ └─────────────────────────┘ │
└─────────────────────────────┘
RESULT: Global a = 0 (unchanged), Global b = 1 (changed)

STEP 2: fun2() is called
┌─────────────────────────────┐
│ fun2() scope                │
│ ┌─────────────────────────┐ │
│ │ int b;     ← LOCAL      │ │
│ │ a = 3;     ← GLOBAL a   │ │  (no local a declared)
│ │ b = 4;     ← LOCAL b    │ │
│ │ print();   ← calls print│ │
│ └─────────────────────────┘ │
└─────────────────────────────┘
RESULT: Global a = 3 (changed), Global b = 1 (unchanged - local b was modified)

STEP 3: print() is called from within fun2()
┌─────────────────────────────┐
│ print() scope               │
│ ┌─────────────────────────┐ │
│ │ printf("%d %d", a, b);  │ │  ← Uses GLOBAL a and GLOBAL b
│ │                         │ │     because no local variables declared
│ └─────────────────────────┘ │
└─────────────────────────────┘
OUTPUT: "3 1" (Global a = 3, Global b = 1)

=== KEY CONCEPTS ===
1. LOCAL variables shadow (hide) GLOBAL variables with same name
2. If no local variable exists, the global one is used
3. Changes to local variables don't affect globals
4. Changes to globals (when no local exists) persist after function ends
5. print() function always sees globals because it declares no locals

FINAL ANSWER: The output is "3 1"
*/