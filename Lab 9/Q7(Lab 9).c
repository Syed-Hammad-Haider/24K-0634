#include <stdio.h>
#include <string.h>

void ascending(char arr[][50], int n) {
    char temp[50]; 

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j][0] > arr[j + 1][0]) {
                strcpy(temp, arr[j]);}}}
}

int main() {
    int n;
    printf("Enter the number of strings: ");
    scanf("%d", &n);
    
    char arr[n][50];
    for (int i = 0; i < n; i++) {
    	printf("Enter string %d: ", i+1);
        scanf("%s", arr[i]);}

    ascending(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);} 
}
