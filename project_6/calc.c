#include <stdio.h>

int addition(int a, int b) {
    return a + b;
}

int subtraction(int a, int b) {
    return a - b;
}

int multiplication(int a, int b) {
    return a * b;
}

float division(int a, int b) {
    if (b == 0) {
        printf("Error! Division by zero is not allowed.\n");
        return 0;
    }
    return (float)a / b;
}

int modulus(int a, int b) {
    if (b == 0) {
        printf("Error! Modulus by zero is not allowed.\n");
        return 0;
    }
    return a % b;
}

int main() {
    int choice, num1, num2;
    char continueProgram = 'y';

    while (1) {
        printf("\nPress 1 for Addition\n");
        printf("Press 2 for Subtraction\n");
        printf("Press 3 for Multiplication\n");
        printf("Press 4 for Division\n");
        printf("Press 5 for Modulos\n");
        printf("Press 0 for exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 0) {
            printf("Exiting the program...\n");
            break;
        }

        printf("Enter the first number: ");
        scanf("%d", &num1);
        printf("Enter the second number: ");
        scanf("%d", &num2);

        switch (choice) {
            case 1:
                printf("Addition of %d and %d is %d\n", num1, num2, addition(num1, num2));
                break;
            case 2:
                printf("Subtraction of %d and %d is %d\n", num1, num2, subtraction(num1, num2));
                break;
            case 3:
                printf("Multiplication of %d and %d is %d\n", num1, num2, multiplication(num1, num2));
                break;
            case 4:
                printf("Division of %d and %d is %.2f\n", num1, num2, division(num1, num2));
                break;
            case 5:
                printf("Modulus of %d and %d is %d\n", num1, num2, modulus(num1, num2));
                break;
            default:
                printf("Invalid choice! Please select a valid option.\n");
        }
    }

    return 0;
}

