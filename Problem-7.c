//Lab-7:

/*Write a C program to get this output:
 1
 2 2
 3 3 3
 4 4 4 4
 5 5 5 5 5 
 6 6 6 6 6 6
 7 7 7 7 7 7 7
 8 8 8 8 8 8 8 8 
 */


#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 8; i++) {       // Loop for each row
        for (j = 1; j <= i; j++) {   // Loop for printing numbers in each row
            printf("%d ", i);
        }
        printf("\n"); // Move to next line
    }

    return 0;
}
