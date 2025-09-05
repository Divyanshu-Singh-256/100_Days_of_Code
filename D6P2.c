#include <stdio.h>
int main() {
    int num;
    printf("Enter the num for which positive, negative or zero is to be determined: ");
    scanf("%d", &num);

    if (num >= 0) {
        if (num == 0) {
            printf("num is 0");
        } else {
            printf("%d is positive", num);
        }
    } else {
        printf("num is negative");
    }
    return 0;
}