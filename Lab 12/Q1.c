#include <stdio.h>
#include <stdlib.h>
int main(){
	int n;
	printf("Enter size of array: ");
	scanf("%d",&n);
	int *arr=(int*)malloc(sizeof(int)*n);
	if (arr==NULL){
		printf("Failed memory allocation");
		return 1;}
	
	for (int i=0;i<n;i++){
	printf("Enter array element: ");
	scanf("%d",&arr[i]);}
	
	int *ptr=&arr[0],sum=0;
	for (int i=0;i<n;i++){
		sum+=*(ptr+i);}
		printf("SUM: %d",sum);
		free(arr);
	return 0;}
 