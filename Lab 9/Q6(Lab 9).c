#include <stdio.h>

void max_min(int arr[],int size) {
	int max=arr[0];
	int min=arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min) 
            min = arr[i];}
    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);                
}

int main() {
    int size;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int arr[size]; 

    for (int i = 0; i < size; i++) {
    	printf("Enter integer %d: ",i+1);
        scanf("%d", &arr[i]);}

    max_min(arr, size);
}
