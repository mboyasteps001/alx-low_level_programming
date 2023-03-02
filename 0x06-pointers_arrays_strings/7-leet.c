#include "main.h"

/**
 * leet - The function that converts the numbers
 * into their respective given number
 * @str:Input string
 * Return:Converted string
 */

char *leet(char *str)
{
	int i;

	/*Loop each character*/
	for ( ; *str != '\0'; str++)
	{
		for (i = 0; i < 5; ++i)
		{
			if (*str == "aAeEoOtTlL"[i])
			{
				*str = "43071"[i];
				break;
			}
		}
	}
	return (str);
}
