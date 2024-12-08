#include <stdio.h>

int main()
{
    char str[] = "University of tehran";
    char *str_copy;

    str_copy = str;
    str_copy[14] = 'T'; // conversion

    printf("str = %s\nstr_copy = %s\n", str, str_copy);

    //* str = University of Tehran
    //* str_copy = University of Tehran

    //* str_copy is a pointer which points to the str
    return 0;
}
