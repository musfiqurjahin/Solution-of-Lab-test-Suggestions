
/*
Write a C program to get this output:
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5 6
1 2 3 4 5 6 7
1 2 3 4 5 6 7 8
*/

#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 8; i++) {       // Outer loop for rows
        for (j = 1; j <= i; j++) {   // Inner loop for printing numbers from 1 to i
            printf("%d ", j);
        }
        printf("\n"); // Move to the next line
    }

    return 0;
}
