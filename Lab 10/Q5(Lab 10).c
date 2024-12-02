#include <stdio.h>
void bubble_sort(int array[], int length);

int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int array[size];

    for (int index = 0; index < size; index++)
    {
        printf("Enter the element at index %d: ", index);
        scanf("%d", &array[index]);
    }

    bubble_sort(array, size);

    printf("\nDisplaying the sorted array:\n");
    for (int index = 0; index < size; index++)
    {
        printf("%d ", array[index]);
    }

    return 0;
}

void bubble_sort(int array[], int length)
{
    if (length == 1)  // Base case: if the length is 1, the array is already sorted
    { 
        return;
    }
    else
    {
        for (int index = 0; index < length - 1; index++)
        {
            if (array[index] > array[index + 1])
            {
                int temp = array[index];
                array[index] = array[index + 1];
                array[index + 1] = temp;
            }
        }
        bubble_sort(array, length - 1);
    }
}
