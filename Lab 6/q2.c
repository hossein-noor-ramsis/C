#include <stdio.h>

int main()
{
    int *ptr;
    *ptr = 20;
    //* add a * to the start of ptr to access the pointer value

    printf("x = %d\n", *ptr);
    return 0;
}
