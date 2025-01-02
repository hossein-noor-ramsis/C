typedef struct USER_NODE
{
  char username[50];
  char password[50];
  struct CHAT_NODE *chats;

  struct USER_NODE *next;
} USER_NODE;

typedef struct MESSAGE_NODE
{
  struct USER_NODE *author;
  struct CHAT_NODE *chat;
  char content[256];

  struct MESSAGE_NODE *next;
} MESSAGE_NODE;

typedef struct CHAT_NODE
{
  char name[50];
  char users[2][50];
  MESSAGE_NODE *messages;

  struct CHAT_NODE *next;
} CHAT_NODE;

typedef struct SYSTEM
{
  USER_NODE *user;
  CHAT_NODE *chat;
  USER_NODE *users;
} SYSTEM;
