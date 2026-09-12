//Delete an element from an array.

#include <stdio.h>

int main() {
    int n, i, position;

    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &position);

    // Shift elements to the left
    for (i = position; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Print the updated array
    for (i = 0; i < n - 1; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
