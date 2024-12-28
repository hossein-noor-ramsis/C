#include "main.h"

void signup(USER *usersHead, USER **user)
{
  char username[32];
  char password[32];

  printf("Username: ");
  gets(username);

  printf("Password: ");
  gets(password);

  *user = searchUserNode(usersHead, username);

  if (*user)
  {
    printf("Error: Username repeatedOne already exists.\n");

    user = NULL;
    return;
  }

  *user = createUserNode(usersHead, username, password);

  printf("User %s successfully registered!\n", (*user)->username);
  return;
}
