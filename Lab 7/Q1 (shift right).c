#include <stdio.h>

int main() {
    int arr[6] = {1, 2, 3, 4, 5, 6};
    printf("\n");

    int last = arr[5];
    
    for (int i = 5; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = last;
    
    printf("Shifted array: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}


