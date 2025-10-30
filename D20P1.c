#include <stdio.h>
int main(){
    int num, product = 1, found_odd = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if(num < 0) {
        num = -num;
    }
    while (num != 0) {
        int digit = num % 10;
        if (digit % 2 != 0) { 
            product *= digit;
            found_odd = 1; 
        }
        num /= 10;
    }
    if (found_odd) {
        printf("Product of odd digits: %d\n", product);
    } else {
        printf("No odd digits found.\n");
    }
    return 0;
}