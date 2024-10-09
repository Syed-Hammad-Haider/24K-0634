#include <stdio.h>
int main(){
	int number,i;
	bool flag=true;
	printf("Enter a number: ");
	scanf("%d",&number);
	if (number<2){
		printf("Nor a prime number\n");
		break;}
	}
	for (i=2;i<number;i++){
		if (number%i==0)
		   flag=false;}
	
	if (flag==false)
	   printf("Not a prime number");
	else
	   printf("is a prime number");     
}