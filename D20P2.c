#include <stdio.h>
int main(){
    int n, binary[32], index = 0;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    if(n>=0){
        while(n > 0){
            binary[index] = n % 2;
            n = n / 2;
            index++;
        }
        printf("1's Complement: ");
        for(int i = index - 1; i >= 0; i--){
            printf("%d", binary[i] == 0 ? 1 : 0);
        }
        printf("\n");
    }
    else{
        printf("Please enter a positive integer\n");
    }
    return 0;
}