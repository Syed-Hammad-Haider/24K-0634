#include <stdio.h>
#include <stdbool.h>
void check_prime(int a){
	if (a<2){
	   printf("Not prime");
	   return;}
	
	bool flag=true; 
	for (int i=2;i<a;i++){
		if (a%i==0)
			flag=false;}
	if (flag)
	   printf("Prime number");
	else 
	   printf("Not prime");   		
	}

int main(){
	int num;
	printf("Enter number: ");
	scanf("%d",&num);
	
	check_prime(num);
	
}