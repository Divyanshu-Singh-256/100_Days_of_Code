#include <stdio.h>
int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    int fact = 1;
    for(int i=2;i<=n;i++){
        fact *= i;
    }
    return fact;
}
int main(){
    int num, sum = 0, original;
    printf("Enter a positive integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input. Please enter a valid integer.\n");
        return 1;
    }
    if(num>=0){
        original = num;
        while(num != 0){
            int digit = num % 10;
            sum += factorial(digit);
            num /= 10;
        }
        if(sum == original){
            printf("%d is a strong number\n",original);
        }
        else{
            printf("%d is not a strong number\n",original);
        }
    }
    else{
        printf("Please enter a positive integer\n");
    }
    return 0;
}