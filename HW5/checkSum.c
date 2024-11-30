#include <stdio.h>

int checkSum(int Array[], int n, int k);

int main()
{
    int numbers[10];
    int check;
    int count;

    printf("enter n: ");
    scanf("%d", &count);

    printf("enter %d numbers: ", count);
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &numbers[i]);
    }

    printf("enter k: ");
    scanf("%d", &check);

    checkSum(numbers, count, check);
}

int checkSum(int Array[], int n, int k)
{
    int result;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            result = Array[i] + Array[j];

            if (result == k)
            {
                printf("True");
                return 1;
            }
        }
    }

    printf("False");
    return 0;
}
