#include <stdio.h>
int main(){
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    if(n>0){
        for(int i=1;i<=n;i++){
            printf("%d\n",i);
        }
    }
    else{
        printf("Please enter a positive integer\n");
    }
    return 0;
}