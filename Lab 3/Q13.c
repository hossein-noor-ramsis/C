#include <stdio.h>;

int main()
{
  int n;
  printf("Enter a number between 1 and 7: ");
  scanf("%d", &n);

  switch (n)
  {
  case 1:
    printf("Shanbeh\n");
    break;
  case 2:
    printf("Yekshanbeh\n");
    break;
  case 3:
    printf("Doshanbeh\n");
    break;
  case 4:
    printf("Seshanbeh\n");
    break;
  case 5:
    printf("Chaharshanbeh\n");
    break;
  case 6:
    printf("Panjshanbeh\n");
    break;
  case 7:
    printf("Jomeh\n");
    break;
  default:
    printf("Invalid input!\n");
    break;
  }

  return 0;
}
