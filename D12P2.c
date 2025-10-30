#include <stdio.h>
int main(){
    int units;
    printf("Enter number of units consumed: ");
    scanf("%d",&units);
    int bill = 0;
    if(units<=100 && units>=0){
        bill = units * 5;
    }
    else if(units>100 && units<=200){
        bill = (100 * 5) + (units - 100) * 7;
    }
    else if(units>200 && units<=300){
        bill = (100 * 5) + (100 * 7) + (units - 200) * 10;
    }
    else if(units>300){
        bill = (100 * 5) + (100 * 7) + (100 * 10) + (units - 300) * 12;
    }
    else{
        printf("Invalid input\n");
        return 0;
    }
    printf("Electricity Bill: ₹%d\n",bill);
    return 0;
}