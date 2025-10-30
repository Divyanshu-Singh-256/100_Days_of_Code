#include <stdio.h>
int main(){
    int a,b;
    printf("Enter two positive integers: ");
    scanf("%d %d",&a,&b);
    if(a>0 && b>0){
        while(b!=0){
            int temp = b;
            b = a % b;
            a = temp;
        }
        printf("HCF (GCD) is: %d\n",a);
    }
    else{
        printf("Please enter positive integers\n");
    }
    return 0;
}