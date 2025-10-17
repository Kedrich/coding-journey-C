// Fill in the missing parts

#include <stdio.h>

// TODO: Complete this function
void addTime(int h1, int m1, int h2, int m2, int *totalHours, int *totalMinutes) {
    // Add minutes and hours
    int totalMins = m1 + m2;
    int totalHrs = h1 + h2;
    
    // Handle minute overflow (60+ minutes)
    if (totalMins >= 60) {
        totalHrs += totalMins / 60;
        totalMins = totalMins % 60;
    }
    
    // Handle hour overflow (24+ hours)
    totalHrs = totalHrs % 24;
    
    *totalHours = totalHrs;
    *totalMinutes = totalMins;
}

int main() {
    int h1 = 14, m1 = 45;  // 2:45 PM
    int h2 = 3, m2 = 30;   // 3:30
    int totalH, totalM;
    
    printf("Time 1: %02d:%02d\n", h1, m1);
    printf("Time 2: %02d:%02d\n", h2, m2);
    
    // TODO: Call the function
    addTime(h1, m1, h2, m2, &totalH, &totalM);
    
    printf("Total time: %02d:%02d\n", totalH, totalM);
    
    return 0;
}

/*
#include <stdio.h>

// TODO: Write deposit function
void deposit(_____ balance, float amount) {
    // Add amount to balance
}

// TODO: Write withdraw function  

// Return 1 if successful, 0 if insufficient funds
int withdraw(_____ balance, float amount) {
    // Check if sufficient funds, then withdraw
    // Your code here
}

int main() {
    float balance = 1000.0;
    
    printf("Initial balance: $%.2f\n", balance);
    
    // TODO: Deposit $500
    deposit(_____, 500.0);
    printf("After deposit: $%.2f\n", balance);
    
    // TODO: Withdraw $200
    if (withdraw(_____, 200.0)) {
        printf("After withdrawal: $%.2f\n", balance);
    } else {
        printf("Insufficient funds!\n");
    }
    
    // TODO: Try to withdraw $2000 (should fail)
    if (withdraw(_____, 2000.0)) {
        printf("After large withdrawal: $%.2f\n", balance);
    } else {
        printf("Insufficient funds for large withdrawal!\n");
    }
    
    return 0;
}
*/
/*
#include <stdio.h>

// TODO: Complete this function
void analyzeGrades(int grade1, int grade2, int grade3, 
                  float *average, int *highest, int *lowest) {
    // Calculate average
    *average = (grade1 + grade2 + grade3) / 3.0;
    
    // Find highest grade
    *highest = grade1;
    if (grade2 > grade1) *highest = grade2;
    if (grade3 > grade2) *highest = grade3;
    
    // Find lowest grade
    *lowest = grade1;
    if (grade2 < grade1) *lowest = grade2;
    if (grade3 < grade2) *lowest = grade3;
}

int main() {
    int g1 = 85, g2 = 92, g3 = 78;
    float average;
    int highest, lowest;
    
    // TODO: Call the function
    analyzeGrades(g1, g2, g3, &average, &highest, &lowest);
    
    printf("Grades: %d, %d, %d\n", g1, g2, g3);
    printf("Average: %.2f\n", average);
    printf("Highest: %d\n", highest);
    printf("Lowest: %d\n", lowest);
    
    return 0;
}
*/
/*

#include <stdio.h>
#include <math.h>
// TODO: Complete this function
// Return 1 if real roots exist, 0 if no real roots
int solveQuadratic(float a, float b, float c, float *root1, float *root2) {
    // Calculate discriminant: b² - 4ac
    float discriminant = pow(b, 2) - 4*a*c;
    
    if (discriminant < 0) {
        return 0;  // No real roots
    }
    
    *root1 = (-b + sqrt(discriminant)) / (2 * a);
    *root2 = (-b - sqrt(discriminant)) / (2 * a);
    
    return 1;  // Real roots exist
}

int main() {
    float a = 1, b = -5, c = 6;  // x² - 5x + 6 = 0
    float root1, root2;
    
    printf("Solving %.0fx² + %.0fx + %.0f = 0\n", a, b, c);
    
    // TODO: Call the function
    if (solveQuadratic(a, b, c, &root1, &root2)) {
        printf("Root 1: %.2f\n", root1);
        printf("Root 2: %.2f\n", root2);
    } else {
        printf("No real roots exist.\n");
    }
    
    return 0;
}
*/
/*
#include <stdio.h>

// TODO: Complete this function
void convertTemperature(float celsius, float *fahrenheit, float *kelvin) {
    // Fahrenheit = (Celsius × 9/5) + 32
    // Kelvin = Celsius + 273.15
    
    *fahrenheit = (celsius * (9 / 5)) + 32;
    *kelvin = celsius + 273.15;

}

int main() {
    float celsius = 25.0;
    float fahrenheit, kelvin;   
    
    // TODO: Call the function
    convertTemperature(celsius, &fahrenheit, &kelvin);
    
    printf("%.2f°C = %.2f°F = %.2fK\n", celsius, fahrenheit, kelvin);
    
    return 0;
}
*/

/*
#include <stdio.h>
#define PI 3.14159

// TODO: Complete this function to calculate both area and circumference
void calculateCircle(float radius, float *area, float *circumference) {
    // Calculate area: π × radius²
    *area = PI * radius * radius;
    
    // Calculate circumference: 2 × π × radius
    *circumference = 2 * PI * radius;
}

int main() {
    float radius = 5.0;
    float area, circumference;
    
    // TODO: Call the function correctly
    calculateCircle(radius, &area, &circumference);
    
    printf("Radius: %.2f\n", radius);
    printf("Area: %.2f\n", area);
    printf("Circumference: %.2f\n", circumference);
    
    return 0;
}
*/

/*#include <stdio.h>

// TODO: Write a function that doubles the value pointed to by ptr
void doubleValue(int *ptr) {
    *ptr *= 2;
}

int main() {
    int number = 15;
    
    printf("Original number: %d\n", number);
    
    // TODO: Call doubleValue function
    doubleValue(&number);
    
    printf("Doubled number: %d\n", number);
    
    return 0;
}*/


/*#include <stdio.h>

// TODO: Complete this function
void swap(int *a, int *b) {
    *a = 20;
    *b = 10;   
}

int main() {
    int num1 = 10, num2 = 20;
    
    printf("Before swap: num1 = %d, num2 = %d\n", num1, num2);
    
    // TODO: Call the swap function correctly
    swap(&num1, &num2);
    
    printf("After swap: num1 = %d, num2 = %d\n", num1, num2);
    
    return 0;
}*/

/*#include <stdio.h>

int main() {
    int x = 25;
    int *ptr;
    
    // TODO: Make ptr point to x
    ptr = &x;
    
    printf("Value of x: %d\n", x);
    printf("Address of x: %p\n", &x);  // Print address of x
    printf("Value of ptr: %p\n", ptr);
    printf("Value ptr points to: %d\n", *ptr);  // Print what ptr points to
    
    // TODO: Change x to 50 using the pointer
    *ptr = 50;
    
    printf("New value of x: %d\n", x);
    
    return 0;
}*/