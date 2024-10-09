#include <stdio.h>
int main(){
	int value,sum=0;
	do {
		printf("Enter a value: ");
		scanf("%d",&value);
		sum+=value;
		printf("Sum= %d\n",sum);}
   	while (value!=0);
	}


do-while loop system would be better as it allows the user to atleast enter a value once, and then checks condition later on after running loop once.  