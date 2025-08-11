//Write a C program to convert temperatures between Celsius and Fahrenheit:

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char input[10];
    float celsius, fahrenheit;

    printf("Temperature Converter\n");
    printf("---------------------\n");
    printf("Type 'exit' anytime to quit.\n\n");

    while (1) {
        printf("1. Convert Celsius to Fahrenheit\n");
        printf("2. Convert Fahrenheit to Celsius\n");
        printf("Enter your choice (1 or 2): ");
        scanf("%s", input);

        if (strcmp(input, "exit") == 0) {
            printf("Exiting program...\n");
            break;
        }

        int choice = atoi(input); // Convert string to integer

        if (choice == 1) {
            printf("Enter temperature in Celsius: ");
            scanf("%s", input);

            if (strcmp(input, "exit") == 0) {
                printf("Exiting program...\n");
                break;
            }

            celsius = atof(input); // Convert string to float
            fahrenheit = (celsius * 9 / 5) + 32;
            printf("%.2f Celsius = %.2f Fahrenheit\n\n", celsius, fahrenheit);

        } else if (choice == 2) {
            printf("Enter temperature in Fahrenheit: ");
            scanf("%s", input);

            if (strcmp(input, "exit") == 0) {
                printf("Exiting program...\n");
                break;
            }

            fahrenheit = atof(input);
            celsius = (fahrenheit - 32) * 5 / 9;
            printf("%.2f Fahrenheit = %.2f Celsius\n\n", fahrenheit, celsius);

        } else {
            printf("Invalid choice! Please enter 1, 2, or 'exit'.\n\n");
        }
    }

    return 0;
}
