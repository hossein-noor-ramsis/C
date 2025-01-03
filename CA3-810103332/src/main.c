#include "../includes/main.h"

#define LOGIN "login"
#define SIGNUP "signup"
#define LOGOUT "logout"
#define EXIT "exit"

#define NEW_CHAT "newChat"
#define SELECT_CHAT "selectChat"
#define SHOW_CHAT "showChat"
#define SEND_MESSAGE "sendMessage"

#define LOAD_USERS "loadUsers"

int main()
{
  int isExit = 0;
  char command[16];

  // system
  SYSTEM *System = calloc(1, sizeof(SYSTEM));
  System->users = createUserNode(System, "HEAD", "\0");
  System->user = NULL;
  System->chat = NULL;

  // users linked list

  while (!isExit)
  {
    printf("Enter Command: ");
    gets(command);
    // system("cls");

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
    else if (strcmp(command, SELECT_CHAT) == 0)
    {
      selectChat(System);
    }
    else if (strcmp(command, SHOW_CHAT) == 0)
    {
      showChat(System);
    }
    else if (strcmp(command, SEND_MESSAGE) == 0)
    {
      sendMessage(System);
    }
    else if (strcmp(command, LOAD_USERS) == 0)
    {
      loadUsers(System);
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

  freeUserNode(System->users);

  return 0;
}
