#include <stdio.h>
int main(){
	int arr[10];
	int freq[100]={0};
	
	for (int i=0;i<=10;i++){
	printf("Enter number to store(within 0 and 99 inclusive): ");
	scanf("%d",&arr[i]);
	freq[arr[i]]++;}
	
	for (int x=0;x<100;x++){
		if (freq[x]>0){
			printf("%d=%d times \n",x,freq[x]);
		}
	}	
}