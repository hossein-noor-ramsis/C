#include "../includes/main.h"

int logout(SYSTEM *System)
{
  if (System->user)
  {
    printf("user %s logged out successfully!\n", System->user->username);

    System->user = NULL;
    return 1;
  }

  printf("Error: No user is currently logged in.\n");
  return 0;
}
