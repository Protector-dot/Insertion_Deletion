#include <stdio.h>

int Array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("The traversal of an array is %d\n", arr[i]);
    }
}
int indexInsertion(int arr[], int size, int element, int capacity, int index) //for Insertion function
{
    if (size >= capacity)
    {
        return -1;
    }
    for (int i = size - 1; i > index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    return 1;
}

int indexDeletion(int arr[], int size, int capacity, int indexx) //for Deletion function
{
    if (indexx >= capacity)
    {
        return -1;
    }
    for (int i = indexx; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }
}

int main()
{
    int arr[100] = {1, 2, 3, 4, 5};
    int size = 5;
    Array(arr, size);
    printf("\n");
    //for Insertion
    printf("Now time to insertion");
    printf("\n");
    int element = 45;
    int index = 2;
    indexInsertion(arr, size, element, 100, index);
    size += 1;
    Array(arr, size);
    //for Deletion
    printf("\n");
    printf("Now for time to deletion");
    printf("\n");
    int indexx = 2;
    indexDeletion(arr, size, 100, indexx);
    size -= 1;
    Array(arr, size);
    return 0;
}