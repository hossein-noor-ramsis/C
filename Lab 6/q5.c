#include <stdio.h>

int main()
{
    int x = 25;
    int *ptr;
    int **ptr2;

    ptr = &x;
    ptr2 = &ptr;

    /* print the values of x , &x , *ptr , ptr , &ptr ,
    **ptr2 , *ptr2 , ptr2 and compare them! */

    printf("x: %d, &x: %p \n", x, &x);
    printf("*ptr: %d, ptr: %p, &ptr: %p \n", *ptr, ptr, &ptr);
    printf("**ptr2: %d, *ptr2: %p, ptr2: %p \n\n", **ptr2, *ptr2, ptr2);

    *ptr = 2 * **ptr2;

    /* Now check the values of x , *ptr , **ptr2 */

    printf("x: %d, *ptr: %d, **ptr2: %d \n", x, *ptr, **ptr2);
    //* x: 50, *ptr: 50, **ptr2: 50 

    return 0;
}

//* int **ptr: A pointer to a pointer to an integer. It stores the address of a pointer that points to an integer.
