#include <stdio.h>

int main() {
    int num, original, digit, sum = 0, n = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    // Count the number of digits
    int temp = num;
    while (temp != 0) {
        n++;
        temp /= 10;
    }

    // Calculate the sum of powers of digits
    temp = num;
    while (temp != 0) {
        digit = temp % 10;

        int power = 1;
        for (int i = 0; i < n; i++) {
            power *= digit;
        }

        sum += power;
        temp /= 10;
    }

    if (sum == original)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is not an Armstrong number.\n", original);

    return 0;
}
