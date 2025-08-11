// Lab-10: Write a c program to check If the given number is palindrome or not.

#include <stdio.h>

int main() {
    int num, originalNum, reversedNum = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num; 

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;                 
        reversedNum = reversedNum * 10 + remainder; 
        num /= 10; // Remove the last digit
    }

    // Check palindrome or not
    if (originalNum == reversedNum) {
        printf("%d is a palindrome.\n", originalNum);
    } else {
        printf("%d is not a palindrome.\n", originalNum);
    }

    return 0;
}
