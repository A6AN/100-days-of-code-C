//Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>

int main() {
    float radius, area, circumference;
    float PI = 3.14159;
    printf("Enter the Radius of the Circle: ");
    scanf("%f", &radius);
    area = PI * radius * radius;
    circumference = 2 * PI * radius;
    printf("Area: %.2f\n", area);
    printf("Circumference: %.2f\n", circumference);
    return 0;
}