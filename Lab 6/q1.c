#include <stdio.h>

int main()
{
    int *ptr = NULL;
    printf("%p\n", ptr);
    return 0;
}

//* printf("%d\n", ptr) => 0
//* printf("%d\n", *ptr) => nothing

//* printf("%d\n", ptr) => 00000000
