#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct student std;

struct student
{
	int grade;
	char name[20];

	std *next;
};

int PrintList(std *d);
int Insert(std *d, char *name, int grade);

int main()
{
	char names[3][20] = {"Golzari", "Hadian", "Blookazari"};

	//* dummy should to be pointer
	std *dummy = malloc(sizeof(std)); // Dummy node for the start of the linked list
	dummy->next = NULL;

	PrintList(dummy);

	Insert(dummy, names[0], 18);
	PrintList(dummy);

	Insert(dummy, names[1], 19);
	PrintList(dummy);

	Insert(dummy, names[2], 20);
	PrintList(dummy);

	return 0;
}

int Insert(std *d, char *name, int grade)
{
	// Step 1: Allocate memory
	std *temp = malloc(sizeof(std));
	if (temp == NULL)
	{
		return 0; // If not successful, return 0;
	}

	temp->next = NULL;
	temp->grade = grade;
	strcpy(temp->name, name);

	// step 2: get the link of the first item and put as the next of temp
	temp->next = d->next;

	// step 3: update dummy's next to the new node
	d->next = temp;
	return 1;
}

int PrintList(std *d)
{
	// Print the list until reaching the last node
	//* convert d to d->next
	while (d->next != NULL)
	{
		d = d->next;
		printf("the grade of %s = %d\n", d->name, d->grade);
	}

	return 0;
}
