//WAP to print the following pattern:
//    *   
//   ***
//  *****
// *******
//  *****
//   ***
//    *

#include <stdio.h>

int main() {
    int i, j, k;

    // Upper part
    for (i = 1; i <= 4; i++) {

        // Spaces
        for (j = 1; j <= 4 - i; j++) {
            printf(" ");
        }

        // Stars
        for (k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }

        printf("\n");
    }

    // Lower part
    for (i = 3; i >= 1; i--) {

        // Spaces
        for (j = 1; j <= 4 - i; j++) {
            printf(" ");
        }

        // Stars
        for (k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
