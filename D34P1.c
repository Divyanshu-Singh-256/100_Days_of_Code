#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n + 1];  // One extra space for the new element
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int pos, newElement;
    printf("Enter the position to insert the new element: ");
    scanf("%d", &pos);
    printf("Enter the new element: ");
    scanf("%d", &newElement);

    // Shift elements to the right
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = newElement;

    // Print the updated array
    printf("Updated array: ");
    for (int i = 0; i < n + 1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}