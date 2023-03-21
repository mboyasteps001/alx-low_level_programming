#include "dog.h"
#include<stdio.h>

/**
  *print_dog - Function that prints the struct dog
  *@d: Pointer to struct dog
  *Return: Nothing
  */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: ");
		d->name == NULL ? printf("(nil)\n") : printf("%s\n", d->name);
		printf("Age: ");
		d->age < 0 ? printf("(nil)\n") : printf("%f\n", d->age);
		printf("Owner: ");
		d->owner == NULL ? printf("(nil)") : printf("%s\n", d->owner);
	}
	else
		return;
}
