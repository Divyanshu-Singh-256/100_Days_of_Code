#include <stdio.h>
int main(){
    int a,b;
    printf("Enter two positive integers: ");
    scanf("%d %d",&a,&b);
    if(a>0 && b>0){
        int max = (a > b) ? a : b;
        int lcm = max;
        while(1){
            if(lcm % a == 0 && lcm % b == 0){
                break;
            }
            lcm += max;
        }
        printf("LCM of %d and %d is: %d\n",a,b,lcm);
    }
    else{
        printf("Please enter positive integers\n");
    }
    return 0;
}