#include "../includes/main.h"

int newChat(SYSTEM *System)
{
  char chatName[50];
  char selectedUsername[50];

  printf("Enter chat name: ");
  gets(chatName);

  printf("Enter selected username: ");
  gets(selectedUsername);

  if (System->user == NULL)
  {
    printf("Error: No user is currently logged in.\n");
    return 1;
  }

  if (strcmp(selectedUsername, System->user->username) == 0)
  {
    printf("Error: You cannot create a chat with yourself.\n");
    return 1;
  }

  if (strcmp(selectedUsername, searchUserNode(System, selectedUsername)->username) != 0)
  {
    printf("Error: User %s not found.\n", selectedUsername);
    return 1;
  }

  if (strcmp(chatName, searchChatNode(System, System->user->username, chatName)->name) == 0)
  {
    printf("Error: Chat with name %s already exists.\n", chatName);
    return 1;
  }

  if (strcmp(chatName, searchChatNode(System, selectedUsername, chatName)->name) == 0)
  {
    printf("Error: Chat with name %s already exists for user: %d.\n", chatName, selectedUsername);
    return 1;
  }

  createChatNode(System, System->user->username, selectedUsername, chatName);
  createChatNode(System, selectedUsername, System->user->username, chatName);

  printf("Chat with the name %s created between %s and %s.\n", chatName, System->user->username, selectedUsername);

  return 0;
}
