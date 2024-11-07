#include <stdio.h>
void swap_integers(int a,int b){
	int temp=b;
	b=a;
	a=temp;
	printf("First:%d\nSecond:%d",a,b);
    }
int main(){
	int a,b;
		printf("Enter first integer");
		scanf("%d",&a);
		printf("Enter Second integer");
		scanf("%d",&b);
		
		swap_integers(a,b);
	
}