#include <stdio.h>
int main(){
int number;
printf("Enter any number: ");
scanf("%d",&number);

if(number>0 && number%2==0 && number%10==0)
  printf("Accepted");
else 
  printf("rejected");
}