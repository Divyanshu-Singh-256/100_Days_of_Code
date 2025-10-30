#include <stdio.h>
int main(){
    int n;
    float sum = 0.0;
    printf("Enter the number of terms: ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }
    for(int i=1;i<=n;i++){
        sum += (2*i) / (float)(4*i - 1);
    }
    printf("Sum of the series up to %d terms: %.2f\n",n,sum);
    return 0;
}