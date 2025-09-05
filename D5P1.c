#include <stdio.h>
int main(){
    int principal, rate, time;
    printf("Enter principal, rate(annnual) and time(in years): ");
    scanf("%d %d %d",&principal,&rate,&time);
    printf("Simple Interest: %d\n",(principal*rate*time)/100);
    printf("Compound Interest: %lf\n",principal*(1+(rate/100.0))*time - principal);
    return 0;
}