#include "main.h"

/**
 * main - Entry point
 *
 * Description: Prints _putchar using putchar prototype
 *
 * Return: Always 0
 */

int main(void)
{
	char str[] = "_putchar";
	int i;

	for (i = 0; i <= 7; ++i)
		_putchar(str[i]);
	_putchar('\n');
	return (0);
}
