#include <stdio.h>

int main()
{
    float side1, side2, side3;

    printf("Enter three side lengths: ");
    scanf("%f %f %f", &side1, &side2, &side3);

    if (side1 <= 0 || side2 <= 0 || side3 <= 0) {
        printf("Invalid side lengths.\n");
    } else if (side1 + side2 <= side3 ||
               side1 + side3 <= side2 ||
               side2 + side3 <= side1) {
        printf("These sides cannot form a triangle.\n");
    } else if (side1 == side2 && side2 == side3) {
        printf("Equilateral triangle\n");
    } else if (side1 == side2 || side1 == side3 || side2 == side3) {
        printf("Isosceles triangle\n");
    } else {
        printf("Scalene triangle\n");
    }

    return 0;
}