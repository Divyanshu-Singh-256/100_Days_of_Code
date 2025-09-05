#include <stdio.h>
int main(){
    double length, breadth;
    printf("Enter length and breadth of the rectangle: ");
    scanf("%lf %lf", &length, &breadth);
    printf("Area: %lf\n", length * breadth);
    printf("Perimeter: %lf\n", 2 * (length + breadth));
    return 0;
}