#include "main.h"

/**
 * print_rev - function that prints the characters in reverse order
 *
 * @s: function argument input
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int counter;

	/*loop that counts the lenght of the string*/
	for (counter = 0; s[counter] != '\0'; ++counter)
		;
	/*print character from the last to be counted backward*/
	for (--counter; counter >= 0; --counter)
		_putchar(s[counter]);
	_putchar('\n');
}
