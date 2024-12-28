#include "main.h"

#define LOGIN "login"
#define SIGNUP "signup"
#define LOGOUT "logout"
#define EXIT "exit"

void signup(USER *usersHead, USER *user, char username[32], char password[32])
{
  user = searchUserNode(usersHead, username);

  if (user->username)
  {
    printf("Error: Username repeatedOne already exists.\n");
    user = NULL;
    return;
  }

  user = createUserNode(usersHead, username, password);

  printf("User %s successfully registered!\n", username);
  return;
}
