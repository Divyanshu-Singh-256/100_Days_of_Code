#include <stdio.h>
int main() {
    printf("Enter the integer for which odd or even has to be determined: ");
    int num;
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("%d is Even\n", num);
    } else {
        printf("%d is Odd\n", num);
    }
    return 0;
}