#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * free_dogs - write a function that frees dogs
  *
  * @d: pointer
  *
  * Return: NULL or Always 0 Success
  */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
