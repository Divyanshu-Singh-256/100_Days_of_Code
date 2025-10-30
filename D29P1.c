#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Number of terms: ");
    scanf("%d", &n);
    int arr[1000];

    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += arr[i];
    }


    printf("Sum = %d\n", sum);
    return 0;
}
