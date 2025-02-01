#include <stdio.h>
#define ARRAY_LENGTH 5

int *getIntArrayFromUser(int a[ARRAY_LENGTH])
{
  int *p;
  int i;
  printf("Enter %d integers\n", ARRAY_LENGTH);
  for (i = 0; i < ARRAY_LENGTH; i++)
    scanf("%d", a + i);
  p = a;
  return p;
}

int main()
{
  int a[ARRAY_LENGTH];
  int *A = a;
  int i;

  A = getIntArrayFromUser(a);

  for (i = 0; i < ARRAY_LENGTH; i++)
    printf("%d\n", A[i]);
  return 0;
}