#include "main.h"

/**
 * rev_string - function that reverse the input string
 *
 * @s: function input
 */

void rev_string(char *s)
{
	int counter, i;
	char temp;

	/*count the string lenght up to null character*/
	for (counter = 0; s[counter] != '\0'; ++counter)
		;
	/*cut and swap the string by looping by it's half*/
	for (i = 0; i < counter / 2; ++i)
	{
		temp = s[i];
		s[i] = s[counter - 1 - i];
		s[counter - 1 - i] = temp;
	}
}
