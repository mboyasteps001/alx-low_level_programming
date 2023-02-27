#include "main.h"

/**
 * puts_half - function that prints the half of the string
 * if the counter if odd string should prints
 * n = (lenght_of_string - 1) / 2
 *
 * @str: function input
 */

void puts_half(char *str)
{
	int counter, i;

	/*loop that count th string to the null character*/
	for (counter = 0; str[counter]; ++str)
		;

	if (counter % 2 == 0)
	{
		for (i = counter / 2; str[i] != '\n'; ++i)
			_putchar(str[i]);
	}
	else
	{
		for (i = ((counter - 1) / 2) + 1; str[i] != '\n'; ++i)
			_putchar('\n');
	}
	_putchar('\n');
}
