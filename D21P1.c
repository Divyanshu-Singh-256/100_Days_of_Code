#include <stdio.h>
int main(){
    int num, first_digit, last_digit, digits = 0, temp, swapped_num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if(num < 0){
        printf("Please enter a positive integer\n");
        return 0;
    }
    temp = num;
    last_digit = temp % 10;
    while(temp >= 10){
        temp /= 10;
        digits++;
    }
    first_digit = temp;
    if(digits == 0){
        swapped_num = num; 
    } else {
        swapped_num = last_digit * pow(10, digits) + (num % (int)pow(10, digits) - last_digit) + first_digit;
    }
    printf("Number after swapping first and last digit: %d\n", swapped_num);
    return 0;
}