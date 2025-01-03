typedef struct USER_NODE
{
  char username[50];
  char password[50];
  struct CHAT_NODE *chats;

  struct USER_NODE *next;
} USER_NODE;

typedef struct MESSAGE_NODE
{
  char sender[50];
  char receiver[50];
  char chatName[50];
  char content[256];

  struct MESSAGE_NODE *next;
} MESSAGE_NODE;

typedef struct CHAT_NODE
{
  char name[50];
  char sender[50];
  char receiver[50];
  MESSAGE_NODE *messages;

  struct CHAT_NODE *next;
} CHAT_NODE;

typedef struct SYSTEM
{
  USER_NODE *user;
  CHAT_NODE *chat;

  USER_NODE *users;
} SYSTEM;
