//Write a C program to calculate the area of a circle (A = πr²) and the volume of a cylinder (V = πr²h)

#include <stdio.h>
#define PI 3.1416

int main() {
    float radius, height;
    float area, volume;

    // Input radius and height
    printf("Enter the radius of the circle/cylinder: ");
    scanf("%f", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    // Calculate area and volume
    area = PI * radius * radius;
    volume = area * height;

    // Output results
    printf("\nArea of the circle = %.2f\n", area);
    printf("Volume of the cylinder = %.2f\n", volume);

    return 0;
}
