#include <stdio.h>
int main(){
    printf("Input the number for which vowel or consonant is to be checked: ");
    char c;
    scanf("%c",&c);
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U'){
        printf("%c is a vowel\n",c);
    }
    else{
        printf("%c is a consonant\n",c);
    }
    return 0;
}