#include <stdio.h>
void swapped(int *aPtr, int *bPtr, int *cPtr){
	int temp=*bPtr;
	*bPtr=*aPtr;
	*aPtr=*cPtr;
	*cPtr=temp;}
int main(){
int a,b,c;
printf("Enter values a,b, and c: ");
scanf("%d %d %d",&a,&b,&c);
swapped(&a,&b,&c);
printf("a: %d\nb: %d\nc: %d",a,b,c);
return 0;}