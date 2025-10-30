#include <stdio.h>
int main() {
    int n = 5;
    int start = n;
    while (start > 0) {
        int i = start;
        do {
            printf("%d", i);
            i++;
        } while (i <= n);
        printf("\n");
        start--;
    }
    return 0;
}
