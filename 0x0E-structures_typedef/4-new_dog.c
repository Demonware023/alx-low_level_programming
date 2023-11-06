#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * *new_dog - write a function that creates a new dog
  *
  * *strdup - copies
  *
  * @name: new dog name
  *
  * @float: new dog age
  *
  * @s: pointer
  *
  * @owner: new dog owner
  *
  * Return: NULL or Always 0 Success
  */

char *strdup(const char *s)
{
	char *d = malloc(strlen(s) + 1);

	if (d != NULL)
		strcpy(d, s);
	return (d);
}

dog_t *new_dog(char *name, float age, char *owner)
{
	   dog_t *newDog;
	   char *newName, *newOwner;

	newDog = malloc(sizeof(dog_t));
	if (!newDog)
	{
		return (NULL);
	}

	newName = strdup(name);
	if (!newName)
	{
		free(newDog);
		return (NULL);
	}

	newOwner = strdup(owner);
	if (!newOwner)
	{
		free(newName);
		free(newDog);
		return (NULL);
	}

	newDog->name = newName;
	newDog->age = age;
	newDog->owner = newOwner;

	return (newDog);
}
