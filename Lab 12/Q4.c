#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    printf("Enter length of name(including spaces): ");
    scanf("%d", &n);

    char *name = (char*)malloc((n + 1) * sizeof(char)); 
    if (name == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    getchar(); 

    printf("Enter your full name: ");
    fgets(name, n+1, stdin); 

    printf("Full name: %s\n", name);

    free(name);
    return 0;}

