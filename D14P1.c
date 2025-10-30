#include <stdio.h>
int main(){
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    if(n>0){
        int sum = 0;
        for(int i=1;i<=n;i++){
            sum += (2*i - 1);
        }
        printf("Sum of first %d odd numbers is: %d\n",n,sum);
    }
    else{
        printf("Please enter a positive integer\n");
    }
    return 0;
}