#include <stdio.h>
#include <unistd.h>

/**
  *_putchar - Function that prints the character to the standard output
  *@c: Input character
  *Return: 1 on succes or -1 on fail
  */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
