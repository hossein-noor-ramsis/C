#include "../includes/main.h"

int signup(SYSTEM *System)
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
  user = searchUserNode(System, username);

  if (strcmp(user->username, username) == 0)
  {
    printf("Error: Username repeatedOne already exists.\n");

    return 1;
  }

  // create new user
  System->user = createUserNode(System, username, password);

  printf("User %s successfully registered!\n", username);
  return 0;
}
