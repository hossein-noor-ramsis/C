#include "../includes/main.h"

CHAT_NODE *createChatNode(SYSTEM *System, char sender[50], char receiver[50], char chatName[50])
{
  USER_NODE *user;

  CHAT_NODE *temp;
  CHAT_NODE *chat = calloc(1, sizeof(CHAT_NODE));

  MESSAGE_NODE *messages = calloc(1, sizeof(MESSAGE_NODE));
  messages->next = NULL;
  
  user = searchUserNode(System, sender);
  temp = user->chats;

  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  temp->next = chat;

  chat->messages = messages;
  strcpy(chat->name, chatName);
  strcpy(chat->sender, sender);
  strcpy(chat->receiver, receiver);
  chat->next = NULL;

  return chat;
}
