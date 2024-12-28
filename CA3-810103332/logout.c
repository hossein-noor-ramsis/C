#include "main.h"

void logout(USER **user)
{
  if (user)
  {
    printf("user %s logged out successfully!\n", (*user)->username);
    
    user = NULL;
    return;
  }

  printf("Error: No user is currently logged in.\n");  
  return;
}
