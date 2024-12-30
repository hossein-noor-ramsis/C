#include "main.h"

void logout(SYSTEM *System)
{
  if (System->user)
  {
    printf("user %s logged out successfully!\n", System->user->username);

    System->user = NULL;
    return;
  }

  printf("Error: No user is currently logged in.\n");
  return;
}
