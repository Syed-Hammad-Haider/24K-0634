// Recursive function to print all elements of an array

#include<stdio.h>

void print_elements(int numbers[], int current, int total);

int main() {
    int length;
    printf("Enter the number of elements in your array: ");
    scanf("%d", &length);
    int numbers[length];
    for (int j = 0; j < length; j++) {
        printf("Enter value at position %d: ", j);
        scanf("%d", &numbers[j]);
    }
    print_elements(numbers, 0, length);
    return 0;
}

void print_elements(int numbers[], int current, int total) {
    if (current < total) {
        printf("%d ", numbers[current]);
        print_elements(numbers, current + 1, total);
    }
}
