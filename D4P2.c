# include <stdio.h>
int main(){
    printf("Enter the number till which you want the sum of natural numbers: ");
    int n;
    scanf("%d",&n);
    int sum = 0;
    for(int i=1;i<=n;i++){
        sum += i;
    }
    printf("Sum: %d\n",sum);
    return 0;

}