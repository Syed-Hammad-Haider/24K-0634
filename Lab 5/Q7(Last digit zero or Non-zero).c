#include <stdio.h>
int main(){
int number,last_digit;
printf("Enter a number: ");
scanf("%d",&number);

last_digit=number%10;
(last_digit==0)? printf("Last digit is zero"):
printf("Last digit Non-zero");
}