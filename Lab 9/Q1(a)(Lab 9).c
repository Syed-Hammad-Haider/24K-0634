#include <stdio.h>
#include <string.h>
int main(){
	char str[][10]={{"Hammad"},{"Ate"},{"English"},{"Cricket"},{"FAST"}};
	char word[10];
	bool found=false; 
	
	printf("Enter a word: ");
	scanf("%s",word);
	for (int i=0;i<=4;i++){
		if (strcmp(word,str[i])==0){
		   printf("%s found at index: %d",word,i);
		   found=true;}}
		   
		if (!found)
		   printf("Word not found");   
		}	