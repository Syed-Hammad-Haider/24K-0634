#include <stdio.h>
#include <stdlib.h>
int main(){
	int n,n2;
	printf("Enter size of the array: ");
	scanf("%d",&n);
	
	int *arr=(int*)malloc(sizeof(int)*n);
	if (arr==NULL){
		printf("Failed memory allocation");
		return 1;
	}
	for (int i=0;i<n;i++){
		printf("Enter array element %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	
	int *ptr=&arr[0];
	int max=*ptr;
	
	for (int i=1;i<n;i++){
		if (*(ptr+i)>max)
		    max=*(ptr+i);
	}
	printf("Maximum value in array: %d\n",max);
	
	printf("Enter 2nd array size: ");
	scanf("%d",&n2);
	
	arr=(int*)realloc(ptr,sizeof(int)*n2);
	if (arr==NULL){
		printf("Failed memory reallocation");
		return 1;}
	if (n2>n){
		printf("Enter values for the new array elements\n ");
	for (int i=n;i<n2;i++){
	    printf("Enter array element %d: ",i+1);
		scanf("%d",&arr[i]);	
	}
	for (int i=n;i<n2;i++){
		if (*(ptr+i)>max)
		    max=*(ptr+i);
	} printf("Maximum value in new array: %d",max);}
	
	else{
		int max=arr[0];
		for (int i=1;i<n2;i++){
		if (*(ptr+i)>max)
		    max=*(ptr+i);} printf("Maximum value in new array: %d",max);}
	
	free(arr);
	return 0;
	
}