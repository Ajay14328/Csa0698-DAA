#include <stdio.h>

int main() {
    int n, pos, value;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n + 1];

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Enter value and position (1 to %d): ", n + 1);
    scanf("%d %d", &value, &pos);

    if (pos < 1 || pos > n + 1) return printf("Invalid position!\n"), 1;

    for (int i = n; i >= pos; i--) arr[i] = arr[i - 1];
    arr[pos - 1] = value;

    printf("Array after insertion: ");
    for (int i = 0; i <= n; i++) printf("%d ", arr[i]);
    printf("\n");

    return 0;
}

