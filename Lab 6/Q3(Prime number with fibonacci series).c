#include <stdio.h>
int main(){
	int number,result,i,next=1,prev=0;
	bool flag=true;
	printf("Enter a number: ");
	scanf("%d",&number);
	if (number<2){
		printf("Not a prime number\n");}

	for (i=2;i<number;i++){
		if (number%i==0)
		   flag=false;}
	
	if (flag==false)
	   printf("Not a prime number");
	else
	   printf("is a prime number\n");
	
	if (flag){
		printf("Fibonacci series:");
		for (int x=1;x<=number;x++){
			printf(" %d",prev);
			result=prev+next;
			prev=next;
			next=result;
		}
	}        
}