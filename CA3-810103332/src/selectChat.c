#include "../includes/main.h"

int selectChat(SYSTEM *System)
{
  // initialize
  char selectedChatName[50];
  CHAT_NODE *chat;

  // input
  printf("Enter Chat Name: ");
  gets(selectedChatName);

  // validation
  if (System->user == NULL)
  {
    printf("Error: No user is currently logged in.\n");
    return 1;
  }

  chat = searchChatNode(System, System->user->username, selectedChatName);

  if (strcmp(selectedChatName, chat->name) != 0)
  {
    printf("Error: Chat %s not found for user %s.\n", selectedChatName, System->user->username);
    return 1;
  }

  // set the selected chat
  System->chat = chat;
  printf("Chat %s has been selected as the current chat\n", selectedChatName);
  return 0;
}