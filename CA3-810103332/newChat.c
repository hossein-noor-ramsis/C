#include "main.h"

void newChat(SYSTEM *System)
{
  char chatName[50];
  char selectedUsername[50];

  printf("Enter chat name: ");
  gets(chatName);

  printf("Enter selected username: ");
  gets(selectedUsername);

  if (System->user == NULL)
  {
    printf("Error: No user is currently logged in\n");
    return;
  }

  if (strcmp(selectedUsername, System->user->username) == 0)
  {
    printf("Error:You cannot create a chat with yourself.\n");
    return;
  }

  if (strcmp(chatName, searchChatNode(System, chatName)->name) == 0)
  {
    printf("Error: Chat with name %s already exists.\n", chatName);
    return;
  }

  createChatNode(System, chatName, selectedUsername);
  printf("Chat with the name %s created between %s and %s.\n", chatName, System->user->username, selectedUsername);
  
  return;
}
