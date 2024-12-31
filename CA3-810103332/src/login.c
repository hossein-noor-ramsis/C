#include "../includes/main.h"

void login(SYSTEM *System)
{
  char username[50];
  char password[50];
  USER_NODE *user = malloc(sizeof(USER_NODE));

  printf("Username: ");
  gets(username);

  printf("Password: ");
  gets(password);

  if (System->user != NULL)
  {
    printf("Error: There is an open session, please logout first.\n");

    return;
  }

  user = searchUserNode(System, username);

  if (strcmp(user->password, password) != 0)
  {
    printf("Error: Invalid username or password.\n");

    return;
  }

  System->user = user;

  printf("User %s logged in successfully!\n", username);
  return;
}
