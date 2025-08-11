//C program to Find the big number from three numbers.

#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Input with commas
    printf("Enter three numbers separated by commas (e.g., 10, 20, 30): ");
    scanf("%d, %d, %d", &num1, &num2, &num3);

    // Logic to find the biggest number
    if (num1 >= num2 && num1 >= num3) {
        printf("The biggest number is: %d\n", num1);
    }
    else if (num2 >= num1 && num2 >= num3) {
        printf("The biggest number is: %d\n", num2);
    }
    else {
        printf("The biggest number is: %d\n", num3);
    }

    return 0;
}
