#include <stdio.h>
int main(){
    double radius;
    printf("Enter radius of circle");
    scanf("%lf",&radius);
    printf("Area: %lf\n",(22*radius*radius)/7);
    printf("Circumference: %lf\n",(2*22*radius)/7);
    return 0;
}