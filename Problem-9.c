//Lab-9: C program for Count a number of digit in given number using while loop

#include <stdio.h>

int main() {
    int num, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle 0 separately since loop won't run for 0
    if (num == 0) {
        count = 1;
    } else {
        // If number is negative, make it positive
        if (num < 0) {
            num = -num;
        }
        
        while (num != 0) {
            num /= 10;  // Remove the last digit
            count++;    // Increase digit count
        }
    }

    printf("Number of digits: %d\n", count);
    return 0;
}
