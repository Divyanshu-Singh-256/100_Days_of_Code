#include <stdio.h>
int main() {
    int n = 5; // Number of rows
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print numbers
        for (int k = n - i + 1; k <= n; k++) {
            printf("%d", k);
        }
        printf("\n");
    }
    return 0;
}
