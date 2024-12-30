#include "main.h"

void signup(SYSTEM *System)
{
  char username[50];
  char password[50];

  printf("Username: ");
  gets(username);

  printf("Password: ");
  gets(password);

  System->user = searchUserNode(System, username);

  if (System->user)
  {
    printf("Error: Username repeatedOne already exists.\n");

    System->user = NULL;
    return;
  }

  System->user = createUserNode(System, username, password);

  printf("User %s successfully registered!\n", username);
  return;
}
