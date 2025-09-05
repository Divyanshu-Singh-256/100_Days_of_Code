#include <stdio.h>
int main(){
    printf("Enter the numbers that need to be swapped without using the third variable: ");
    double a,b;
    scanf("%lf %lf",&a,&b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping: %lf %lf\n",a,b);
    return 0;
    
}