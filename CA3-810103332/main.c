#include "main.h"

#define LOGIN "login"
#define SIGNUP "signup"
#define LOGOUT "logout"
#define EXIT "exit"

int main()
{
  int isExit = 0;
  char command[10];

  USER *usersHead = malloc(sizeof(USER));
  usersHead->next = NULL;

  USER **user = malloc(sizeof(USER));
  *user = NULL;

  while (!isExit)
  {
    printf("Enter Command: ");
    gets(command);

    if (strcmp(command, SIGNUP) == 0)
    {
      signup(usersHead, user);
      // printf("user->username: %s\n", (*user)->username);
    }
    else if (strcmp(command, LOGIN) == 0)
    {
    }
    else if (strcmp(command, LOGOUT) == 0)
    {
      logout(user);
    }
    else if (strcmp(command, EXIT) == 0)
    {
      isExit = 1;
    }
    else
    {
      printf("Error: Unknown command.\n");
    }
  }

  return 0;
}
