#include <stdio.h>

void containerLoading(int weights[], int n, int capacity) {
    int totalWeight = 0;

    printf("Items loaded into the container:\n");
    for (int i = 0; i < n; i++) {
        if (totalWeight + weights[i] <= capacity) {
            totalWeight += weights[i];
            printf("Item %d (Weight: %d)\n", i + 1, weights[i]);
        }
    }
    
    printf("Total weight in the container: %d\n", totalWeight);
}

int main() {
    int weights[] = {10, 20, 30, 40, 50};  // Weights of items
    int n = sizeof(weights) / sizeof(weights[0]);
    int capacity;

    printf("Enter container capacity: ");
    scanf("%d", &capacity);

    containerLoading(weights, n, capacity);

    return 0;
}

