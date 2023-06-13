#include "main.h"

/**
 * str_concat - Function that concatenate the strings
 *	and allocates the memory to concatenated string
 *@s1:First string function argument
 *@s2:second string
 *Return:Concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *concat_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	concat_str = malloc(strlen(s1) + strlen(s2) + 1);
	if (concat_str == NULL)
		return (NULL);
	strcpy(concat_str, s1);
	strcat(concat_str, s2);
	return (concat_str);
}
