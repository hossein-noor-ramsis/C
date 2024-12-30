#include "main.h"

#define LOGIN "login"
#define SIGNUP "signup"
#define LOGOUT "logout"
#define EXIT "exit"
#define NEWCHAT "newChat"

int main()
{
  int isExit = 0;
  char command[10];

  SYSTEM *System = malloc(sizeof(SYSTEM));

    System->users->next = NULL;

  USER **user = malloc(sizeof(USER));
  *user = NULL;

  while (!isExit)
  {
    printf("Enter Command: ");
    gets(command);

    if (strcmp(command, SIGNUP) == 0)
    {
      signup(System);
    }
    else if (strcmp(command, LOGIN) == 0)
    {
      login(System);
    }
    else if (strcmp(command, LOGOUT) == 0)
    {
      logout(System);
    }
    else if (strcmp(command, NEWCHAT))
    {
      newChat(System);
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
