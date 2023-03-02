#include "main.h"

/**
 * cap_string - Function that convert each word to capital letter
 * @str: Function argument
 * Return:The converted string
 */

char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		/*check for the lowercastre letters*/
		if (str[i] >= 97 && str[i] <= 122)
		{
			/*Check for empty character*/
			if (i == 0)
				str[i] -= 32;
			/**
			 * check if any matching pattern istr before the character
			 * The character converted to capital letter
			 */
			if (str[i - 1] == 32 || str[i - 1] == 9 || str[i - 1] == 10 ||
				str[i - 1] == 44 || str[i - 1] == 59 || str[i - 1] == 46 ||
				str[i - 1] == 33 || str[i - 1] == 63 || str[i - 1] == 34 ||
				str[i - 1] == 40 || str[i - 1] == 41 || str[i - 1] == 123 ||
				str[i - 1] == 124)
			{
				str[i] -= 32;
			}
		}
		i++;
	}
	return (str);
}
