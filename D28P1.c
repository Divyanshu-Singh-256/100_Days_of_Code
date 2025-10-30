#include <stdio.h>
int main() {
    int n;
    printf("Enter a positive integer: ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }
    printf("Prime numbers from 1 to %d are: ", n);
    for(int num = 2; num <= n; num++) {
        int isPrime = 1; // Assume number is prime
        for(int i = 2; i * i <= num; i++) {
            if(num % i == 0) {
                isPrime = 0; // Number is not prime
                break;
            }
        }
        if(isPrime) {
            printf("%d ", num);
        }
    }
    printf("\n");
    return 0;
}