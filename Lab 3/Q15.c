#include <stdio.h>
#include <stdlib.h>
// #include <time.h>

int main()
{
  int seed = 810103332;
  srand(seed);
  // srand(time(0));

  int random_number = rand() % 100;
  int guess;

  while (guess != random_number)
  {
    printf("Enter your guess: ");
    scanf("%d", &guess);

    if (guess > random_number)
    {
      printf("Your guess is greather than the random number!\n\n");
      continue;
    }

    if (guess < random_number)
    {
      printf("Your guess is less then the random number!\n\n");
      continue;
    }
  }

  printf("Your guess was right! the random number was: %d\n", random_number);
}