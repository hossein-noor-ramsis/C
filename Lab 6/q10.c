#include <stdio.h>
#define SIZE 10

void function(int array[]);

int main()
{
    int arr[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    function(arr);

    for (int j = 0; j < SIZE; j++)
    {
        printf("%d ", arr[j]);
    } // printing the result
    printf("\n");

    //* 1 0 1 0 1 0 1 0 1 0

    return 0;
}

void function(int array[])
{
    for (unsigned int i = 0; i < 10; i++)
    {
        array[i] = array[i] % 2;
    }
}