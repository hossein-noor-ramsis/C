#include "main.h"
#include "newChat.h"

void newChat(SYSTEM *System)
{
  char chatName[50];
  char selectedUsername[50];

  printf("Enter chat name");
  gets(chatName);

  printf("Enter selected username");
  gets(selectedUsername);

  if (System->user == NULL)
  {
    printf("Error: No user is currently logged in\n");
    return;
  }

  if (selectedUsername == System->user->username) {
    printf("Error:You cannot create a chat with yourself.\n");
    return;
  }

  
  
}
