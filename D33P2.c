#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n + 1];  // One extra space for the new element
    printf("Enter %d elements (sorted): ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int newElement;
    printf("Enter the new element to insert: ");
    scanf("%d", &newElement);

    // Find the position to insert the new element
    int pos = n - 1;
    while (pos >= 0 && arr[pos] > newElement) {
        arr[pos + 1] = arr[pos];
        pos--;
    }
    arr[pos + 1] = newElement;

    // Print the updated array
    printf("Updated array: ");
    for (int i = 0; i < n + 1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}