#include <stdio.h>
#include <string.h>

void reverse_string(char str[], char reversed[]) {
    int length = strlen(str);
    for (int i = 0; i < length; i++) {
        reversed[i] = str[length - 1 - i];} 
    reversed[length] = '\0'; 
}

int main() {
    char str[30], result[30];
    printf("Enter a string to reverse: ");
    scanf("%s", str);  

    reverse_string(str, result);  

    printf("Reversed string: %s", result);  
}
