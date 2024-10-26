#include <stdio.h>
#include <string.h>
int main(){
	char str[100];
	char reversed[100];
	printf("Enter string(without spaces): ");
	scanf("%s",str);
	for (int i=strlen(str)-1;i>=0;i--){
		reversed[strlen(str)-1-i]=str[i];
		}
		if (strcmp(str,reversed)==0)
		printf("is a palindrome");
		else
		printf("Not a palindrome"); 
}