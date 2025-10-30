#include  <stdio.h>
int main(){
    int a,b,c;
    printf("Enter coefficients a, b and c: ");
    scanf("%d %d %d",&a,&b,&c);
    int d = b*b - 4*a*c;
    if(d>0){
        printf("Real and Distinct roots\n");
    }
    else if(d==0){
        printf("Real and Equal roots\n");
    }
    else{
        printf("Imaginary roots\n");
    }
    return 0;
}
