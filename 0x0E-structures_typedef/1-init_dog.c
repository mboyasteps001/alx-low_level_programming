#include "dog.h"

/**
  *init_dog - Initialize the dog structure
  *@name: Input for the dog name
  *@age: Input for the dog age
  *@owner: Input for the dog owner
  *Return:Nothing
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
