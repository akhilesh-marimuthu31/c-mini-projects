/*
    Simple Calculator Program in C
    --------------------------------
    This program performs basic arithmetic operations:
    Addition, Subtraction, Multiplication, and Division.
    It asks the user to input two numbers and an operation 
    to perform, then displays the result. The program runs 
    in a loop, allowing multiple calculations until the 
    user chooses to exit.
*/

#include <stdio.h>  // Standard input/output header for C

// Function prototypes for arithmetic operations
float add(float a, float b);        // Adds two numbers
float subtract(float a, float b);   // Subtracts two numbers
float multiply(float a, float b);   // Multiplies two numbers
float divide(float a, float b);     // Divides two numbers

int main() {
    int choice;          // Variable to store user's choice of operation
    float num1, num2;    // Variables to store the two numbers
    float result;        // Variable to store the result of the operation

    while (1) {  // Infinite loop to keep the program running until exit
        // Display calculator menu
        printf("\n=============================\n");
        printf("   Simple Calculator in C   \n");
        printf("=============================\n");
        printf("1. Add (+)\n");
        printf("2. Subtract (-)\n");
        printf("3. Multiply (*)\n");
        printf("4. Divide (/)\n");
        printf("5. Exit\n");
        printf("=============================\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);  // Take user input for operation choice

        // Exit the program if the user selects 5
        if (choice == 5) {
            printf("Exiting the program.\n");
            break;  // Exit the loop and terminate the program
        }

        // Input two numbers from the user
        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);  // Take two float inputs

        // Switch statement to perform the chosen operation
        switch (choice) {
            case 1:
                result = add(num1, num2);  // Call the add function
                printf("Result: %.2f + %.2f = %.2f\n", num1, num2, result);
                break;

            case 2:
                result = subtract(num1, num2);  // Call the subtract function
                printf("Result: %.2f - %.2f = %.2f\n", num1, num2, result);
                break;

            case 3:
                result = multiply(num1, num2);  // Call the multiply function
                printf("Result: %.2f * %.2f = %.2f\n", num1, num2, result);
                break;

            case 4:
                if (num2 != 0) {  // Check for division by zero
                    result = divide(num1, num2);  // Call the divide function
                    printf("Result: %.2f / %.2f = %.2f\n", num1, num2, result);
                } else {
                    printf("Error: Division by zero is not allowed!\n");  // Error message if dividing by zero
                }
                break;

            default:
                printf("Invalid choice! Please select a valid option.\n");  // Handle invalid menu options
        }
    }

    return 0;  // Return success to the operating system
}

// Function to add two numbers
float add(float a, float b) {
    return a + b;  // Return sum of a and b
}

// Function to subtract two numbers
float subtract(float a, float b) {
    return a - b;  // Return difference of a and b
}

// Function to multiply two numbers
float multiply(float a, float b) {
    return a * b;  // Return product of a and b
}

// Function to divide two numbers
float divide(float a, float b) {
    return a / b;  // Return quotient of a and b
}
