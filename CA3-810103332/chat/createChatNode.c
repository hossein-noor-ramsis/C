#include "main.h"

CHAT_NODE *createChatNode(SYSTEM *System, char chatName[50], char selectedUser[50])
{
  MESSAGE_NODE *messages = malloc(sizeof(MESSAGE_NODE));
  CHAT_NODE *temp = System->user->chats;

  CHAT_NODE *chat = malloc(sizeof(CHAT_NODE));
  chat->next = NULL;
  chat->messages = messages;

  while (temp->next != NULL)
  {
    temp = temp->next;
  }

  temp->next = chat;

  strcpy(chat->name, chatName);
  strcpy(chat->users[0], System->user->username);
  strcpy(chat->users[0], selectedUser);
  chat->next = NULL;

  return chat;
}
