#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void myRealloc(int *numbers, unsigned int amount);

int main()
{
  // Allocate memory
  int *numbers;
  unsigned int amount = 0;

  printf("Enter amout of the number: ");
  scanf("%u", &amount);
  fflush(stdin);

  numbers = calloc(amount, sizeof(*numbers));

  // Write to the memory
  numbers[0] = 10;
  numbers[1] = 20;
  numbers[2] = 30;

  // Read from the memory
  printf("numbers are: ");

  for (unsigned int i = 0; i < amount; i++)
  {
    printf("%d ", numbers[i]);
  }

  printf("\n");

  myRealloc(numbers, amount);

  return 0;
}

void myRealloc(int *address, unsigned int amount)
{
  int *numbers;
  char hasRealloc = 'n';
  unsigned int bytes = 0;

  printf("Do you need to reallocate the momory? (y/n): ");
  scanf("%c", &hasRealloc);
  fflush(stdin);

  if (hasRealloc == 'y')
  {
    // reallocate the memory
    printf("How much bytes do you need? ");
    scanf("%u", &bytes);
    fflush(stdin);

    printf("bytes: %u", bytes);
    numbers = realloc(address, bytes);

    printf("numbers are: ");

    for (unsigned int i = 0; i < amount + bytes; i++)
    {
      // write and read the memory
      numbers[i] = (int)i * 10;
      printf("%d ", numbers[i]);
    }

    printf("\n");

    // free the previous memory
    free(address);
    printf("address[1]: %d", address[1]);
  }
}