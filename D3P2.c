#include <stdio.h>
int main(){
    printf("Enter two numbers to be swapped: ");
    double a,b,temp;
    scanf("%lf %lf",&a,&b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping: %lf %lf\n",a,b);
    return 0;
}