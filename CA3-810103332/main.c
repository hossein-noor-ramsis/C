#include "main.h"

#define LOGIN "login"
#define SIGNUP "signup"
#define LOGOUT "logout"
#define EXIT "exit"
#define NEW_CHAT "newChat"

int main()
{
  int isExit = 0;
  char command[16];

  // users linked list
  USER_NODE *users = malloc(sizeof(USER_NODE));
  users->next = NULL;

  // system
  SYSTEM *System = malloc(sizeof(SYSTEM));
  System->users = users;
  System->user = NULL;
  System->chat = NULL;

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
    else if (strcmp(command, NEW_CHAT) == 0)
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
