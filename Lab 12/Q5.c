#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n, n1;
    printf("Enter length of name (including spaces): ");
    scanf("%d", &n);
    
    char *name = (char*)malloc((n + 1) * sizeof(char)); 
    if (name == NULL) {
        printf("Memory allocation failed.\n");
        return 1;}
    getchar(); 
    printf("Enter your full name: ");
    fgets(name, n + 1, stdin); 
    
    char name_copy[n+1];
    strcpy(name_copy,name);
    
    printf("Enter length of ID: ");
    scanf("%d", &n1);

    char *id = (char*)calloc(n1 + 1, sizeof(char)); 
    if (id == NULL) {
        printf("Memory allocation for ID failed.\n");
        free(name); 
        return 1;}
        
    printf("Enter ID: ");
    scanf("%s", id); 
    
    name = (char*)realloc(name, (n + n1 + 2) * sizeof(char));
    if (name == NULL) {
        printf("Memory reallocation failed.\n");
        free(id);
        return 1;}
    for (int i = 0; i < n1; i++) {
        name[i] = id[i];
    }
    name[n1]=" ";

    for (int i = n1+1; i <=n+n1; i++) {
        name[i] = name_copy[i-n1-1];}
    name[n+n1+1] = '\0';
    printf("Combined: %s\n", name);

    // Free allocated memory
    free(id);
    free(name);

    return 0;
}
 