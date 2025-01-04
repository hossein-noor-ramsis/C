#include "../includes/main.h"

int logout(SYSTEM *System)
{
  // validation
  if (System->user == NULL)
  {
    printf("Error: No user is currently logged in.\n");
    return 1;
  }

  // logout the user
  printf("User %s logged out successfully!\n", System->user->username);

  System->user = NULL;
  System->chat = NULL;
  return 0;
}
