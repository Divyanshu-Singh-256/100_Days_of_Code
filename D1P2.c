#include <stdio.h>
int main(){
    double a,b;
    printf("Enter two numbers: ");
    scanf("%lf %lf",&a,&b);
    printf("Product: %lf\n",a*b);
    printf("Sum: %lf\n",a+b);
    printf("Difference: %lf\n",a-b);
    if(b != 0){
        printf("Quotient: %lf\n",a/b);
    } 
    else {
        printf("Quotient: Undefined (division by zero)\n");
    }
}