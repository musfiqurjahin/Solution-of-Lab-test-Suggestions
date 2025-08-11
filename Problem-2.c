//Write a C program to calculate the sum of the first 10 numbers in the factorial series:

//Sum=1!+2!+3!+⋯+10!

#include <stdio.h>

// Function to compute factorial of a number
long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int limit = 10;
    long long sum = 0;

    // Calculate the sum of factorials from 1! to 10!
    for (int i = 1; i <= limit; i++) {
        sum += factorial(i);
    }

    // Output the result
    printf("Sum of the first %d factorials is: %lld\n", limit, sum);

    return 0;
}
