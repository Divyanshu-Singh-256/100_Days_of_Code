#include <stdio.h>
int main(){
    int seconds_input,hours,minutes,seconds;
    printf("Enter time in seconds: ");
    scanf("%d",&seconds_input);
    hours = seconds_input/3600;
    minutes = (seconds_input%3600)/60;
    seconds = (seconds_input%3600)%60;
    printf("Time: %d hours, %d minutes, %d seconds\n",hours,minutes,seconds);
    return 0;
}