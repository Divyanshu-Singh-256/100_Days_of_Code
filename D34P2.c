#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int elementToDelete;
    printf("Enter the element to delete: ");
    scanf("%d", &elementToDelete);

    // Find the element and shift elements to the left
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == elementToDelete) {
            break;
        }
    }

    if (i < n) {
        // Element found, shift elements
        for (int j = i; j < n - 1; j++) {
            arr[j] = arr[j + 1];
        }
        n--;  // Reduce the size of the array
    }

    // Print the updated array
    printf("Updated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}