 // WAP to swap the first and last digit of a number
 #include <stdio.h>
#include <math.h>

int main() {
    int n, first, last, digits, middle, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Last digit
    last = n % 10;

    // Find number of digits
    digits = (int)log10(n);

    // First digit
    first = n / (int)pow(10, digits);

    // Middle part
    middle = (n % (int)pow(10, digits)) / 10;

    // Swap first and last digits
    result = last * (int)pow(10, digits) + middle * 10 + first;

    printf("Output: %d", result);

    return 0;
}
