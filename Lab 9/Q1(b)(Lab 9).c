#include <stdio.h>
#include <string.h>
int main(){
	int n;
	printf("How many words to store in the array:");
	scanf("%d",&n);
	char str[n][21];
	
	for (int i=0;i<n;i++){
		printf("Enter word %d: ",i+1);
		scanf("%s",str[i]);}
	
	char reversed[21];
	for (int i=0;i<n;i++){
	for (int j=strlen(str[i])-1;j>=0;j--){
		reversed[strlen(str[i])-1-j]=str[i][j];
	}
		reversed[strlen(str[i])]='\0';
		if (strcmp(reversed,str[i])==0)
			printf("Word %d is a palindrome\n",i+1);
		else 
		    printf("Word %d is not a palindrome\n",i+1);}
			
		}