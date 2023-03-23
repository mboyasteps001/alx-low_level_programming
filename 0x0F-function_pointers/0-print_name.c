#include "function_pointers.h"
#include<stdio.h>
/**
  *print_name - Function to print name
  *@name: Input name to print
  *@f: Function pointer that returns nothing
  *Return: Nothing
  */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL && f == NULL)
	{
		return;
	}
	else
	{
		f(name);
	}
}
