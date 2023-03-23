#include<stdlib.h>
/**
  *print_name - Function to print name
  *@name: Input name to print
  *@f: Function pointer that returns nothing
  *Return: Nothing
  */

void print_name(char *name, char (*f)(char *))
{
	if (name == NULL && f == NULL)
		return;
	f(name);
}
