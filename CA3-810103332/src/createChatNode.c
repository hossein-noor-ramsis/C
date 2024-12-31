#include "../includes/main.h"

CHAT_NODE *createChatNode(SYSTEM *System, char chatName[50], char selectedUsername[50])
{
  MESSAGE_NODE *messages = malloc(sizeof(MESSAGE_NODE));
  CHAT_NODE *userOne = System->user->chats;
  CHAT_NODE *userTwo = searchUserNode(System, selectedUsername)->chats;

  CHAT_NODE *chat = malloc(sizeof(CHAT_NODE));
  chat->next = NULL;
  chat->messages = messages;

  while (userOne->next != NULL)
  {
    userOne = userOne->next;
  }

  while (userTwo->next != NULL)
  {
    userTwo = userTwo->next;
  }

  userOne->next = chat;
  userTwo->next = chat;

  strcpy(chat->name, chatName);
  strcpy(chat->users[0], System->user->username);
  strcpy(chat->users[0], selectedUsername);
  chat->next = NULL;

  return chat;
}
