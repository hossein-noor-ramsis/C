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

  USER *user = malloc(sizeof(USER));

  char username[32];
  char password[32];

  while (!isExit)
  {
    printf("Enter Command: ");
    gets(command);

    if (strcmp(command, SIGNUP) == 0)
    {
      printf("Username: ");
      gets(username);

      printf("Password: ");
      gets(password);

      signup(usersHead, user, username, password);
    }
    else if (strcmp(command, EXIT) == 0)
    {
      isExit = 1;
    }
    else
    {
      printf("Error:Unknowncommand.\n");
    }
  }

  return 0;
}
