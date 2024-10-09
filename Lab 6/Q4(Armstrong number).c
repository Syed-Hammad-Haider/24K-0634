#include <stdio.h>
int main(){
	int number,digit,value,sum=0;
printf("Enter a number: ");
scanf("%d",&number);
value=number;

while(number>0){
	digit=number%10;
	sum+=(digit*digit*digit);
	number=number/10;}

if (value==sum)
	printf("Armstrong number");
else
    printf("Not an armstrong number");	
}