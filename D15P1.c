#include <stdio.h>
int main(){
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    if(n>=0){
        long long factorial = 1;
        for(int i=1;i<=n;i++){
            factorial *= i;
        }
        printf("Factorial of %d is: %I64d\n",n,factorial);
    }
    else{
        printf("Please enter a positive integer\n");
    }
    return 0;
}