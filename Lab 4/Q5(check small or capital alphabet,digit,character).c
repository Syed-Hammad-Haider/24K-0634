#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z') 
        printf("small alphabet.", ch);
    else if (ch >= 'A' && ch <= 'Z') 
        printf("capital alphabet., ch);
    else if (ch >= '0' && ch <= '9') 
        printf("a digit", ch);
    else 
        printf("special character", ch);
}
