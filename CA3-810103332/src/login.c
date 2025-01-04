#include "../includes/main.h"

int login(SYSTEM *System)
{
  // initialize
  char username[50];
  char password[50];
  USER_NODE *user = calloc(1, sizeof(USER_NODE));

  // input
  printf("Username: ");
  gets(username);

  printf("Password: ");
  gets(password);

  // validation
  if (System->user != NULL)
  {
    printf("Error: There is an open session, please logout first.\n");

    return 1;
  }

  user = searchUserNode(System, username);

  if (strcmp(user->password, password) != 0)
  {
    printf("Error: Invalid username or password.\n");

    return 1;
  }

  // login the user
  System->user = user;

  printf("User %s logged in successfully!\n", username);
  return 0;
}
