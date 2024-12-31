#include "../includes/main.h"

void selectChat(SYSTEM *System)
{
  char selectedChatName[50];
  CHAT_NODE *chat;

  printf("Enter Chat Name: ");
  gets(selectedChatName);

  if (System->user == NULL)
  {
    printf("Error: No user is currently logged in\n");
    return;
  }

  chat = searchChatNode(System, selectedChatName);

  if (strcmp(selectedChatName, chat->name) != 0)
  {
    printf("Error: Chat %s not found for user %s\n", selectedChatName, System->user->username);
    return;
  }

  System->chat = chat;
  printf("Chat %s has been selected as the current chat.\n", selectedChatName);
  return;
}