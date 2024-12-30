#include "main.h"

void login(SYSTEM *System)
{
  char username[50];
  char password[50];

  printf("Username: ");
  gets(username);

  printf("Password: ");
  gets(password);

  if (System->user != NULL)
  {
    printf("Error: There is an open session, please logout first.\n");
    return;
  }

  System->user = searchUserNode(System, username);

  if (strcmp(System->user->password, password) != 0)
  {
    printf("Error: Invalid username or password.\n");

    System->user = NULL;
    return;
  }

  printf("User %s logged in successfully!\n", username);
  return;
}
