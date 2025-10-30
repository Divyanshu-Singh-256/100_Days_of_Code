#include <stdio.h>
int main(){
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    if(n>0){
        long long product = 1;
        for(int i=2;i<=n;i+=2){
            product *= i;
        }
        printf("Product of even numbers from 1 to %d is: %lld\n",n,product);
    }
    else{
        printf("Please enter a positive integer\n");
    }
    return 0;
}