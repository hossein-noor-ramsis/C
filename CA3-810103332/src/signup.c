#include "../includes/main.h"

int signup(SYSTEM *System)
{
  char username[50];
  char password[50];
  USER_NODE *user = calloc(1, sizeof(USER_NODE));

  printf("Username: ");
  gets(username);

  printf("Password: ");
  gets(password);

  user = searchUserNode(System, username);

  if (strcmp(user->username, username) == 0)
  {
    printf("Error: Username repeatedOne already exists.\n");

    return 1;
  }

  System->user = createUserNode(System, username, password);

  printf("User %s successfully registered!\n", username);
  return 0;
}
