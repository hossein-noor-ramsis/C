#include <stdio.h>
#include <stdlib.h>
// #include <time.h>

int main()
{
  unsigned int seed = 810103332;
  srand(seed);
  // srand(time(0));

  int randomNumber = rand() % 100;
  int guess, guessStatus;

  while (guess != randomNumber)
  {
    printf("Enter your guess (between 1 and 100): ");
    guessStatus = scanf("%d", &guess);

    if (guessStatus != 1)
    {
      printf("Invalid Input!\n\n");
      scanf("%*[^\n]");

      continue;
    }

    if (guess > randomNumber)
    {
      printf("Your guess is greather than the random number!\n\n");

      continue;
    }

    if (guess < randomNumber)
    {
      printf("Your guess is less then the random number!\n\n");
      
      continue;
    }
  }

  printf("Your guess is right! the random number was: %d\n", randomNumber);
}