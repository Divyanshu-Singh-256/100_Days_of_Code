#include <stdio.h>
int main(){
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    if(n>=0){
        int binary[32];
        int index = 0;
        while(n > 0){
            binary[index] = n % 2;
            n = n / 2;
            index++;
        }
        printf("Binary representation: ");
        for(int i = index - 1; i >= 0; i--){
            printf("%d", binary[i]);
        }
        printf("\n");
    }
    else{
        printf("Please enter a positive integer\n");
    }
    return 0;
}