#include <stdio.h>
#include "fact.h"

int main()
{
  int n;

  scanf("%d", &n);
  printf("%d \n", fact(n));

  return 0;
}

// * gcc ./"Lab 4"/q12/main.c ./"Lab 4"/q12/fact.c -o ./"Lab 4"/q12/main.exe
