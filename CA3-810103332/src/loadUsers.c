#include "../includes/main.h"

int loadUsers(SYSTEM *System)
{
  FILE *usersFile;
  char filename[50];
  int usersCount = 0;
  int lineNumber = 0;

  char line[102];
  char username[50];
  char password[50];

  // use this flag to switch when read the username and password form the file
  int flag = 0;

  printf("Enter filename: ");
  gets(filename);

  usersFile = fopen(filename, "r");
  if (usersFile == NULL)
  {
    printf("Error: unable to open file %s.\n", filename);
    return 1;
  }

  while (1)
  {
    if (feof(usersFile))
    {
      break;
    }

    int j = 0;
    flag = 0;
    fgets(line, 102, usersFile);
    lineNumber++;

    if (flag == 0)
    {
      for (int i = 0; i < 49; i++)
      {
        // brake loop with flag == 0 means there is an error
        if (line[j] == ' ')
        {
          flag = 1;
          j++;
          username[i] = '\0';
          break;
        }

        if (line[j] == '\n')
        {
          flag = 0;
          break;
        }

        if (line[j] < 48)
        {
          flag = 0;
          break;
        }

        if ((line[j] < 65) && (line[j] > 57))
        {
          flag = 0;
          break;
        }

        if ((line[j] < 97) && (line[j] > 90))
        {
          flag = 0;
          break;
        }

        if (line[j] > 122)
        {
          flag = 0;
          break;
        }

        username[i] = line[j];
        j++;
      }

      if (flag == 0)
      {
        printf("Warning: Invalid format in line %d. Skipping.\n", lineNumber);
        continue;
      }
    }

    if (flag == 1)
    {
      // brake loop with flag == 1 means there is an error
      for (int i = 0; i < 49; i++)
      {
        if ((line[j] == '\n') || line[j] == '\0')
        {
          flag = 0;
          j++;
          password[i] = '\0';
          break;
        }

        if (line[j] < 48)
        {
          flag = 1;
          break;
        }

        if ((line[j] < 65) && (line[j] > 57))
        {
          flag = 1;
          break;
        }

        if ((line[j] < 97) && (line[j] > 90))
        {
          flag = 1;
          break;
        }

        if (line[j] > 122)
        {
          flag = 1;
          break;
        }

        password[i] = line[j];
        j++;
      }

      if (flag == 1)
      {
        printf("Warning: Invalid format in line %d. Skipping.\n", lineNumber);
        continue;
      }
    }

    createUserNode(System, username, password);
    usersCount++;
  }

  fclose(usersFile);

  printf("Users successfully loaded from %s , %d user(s) added.\n", filename, usersCount);
  return 0;
}
