#include "main.h"

/**
 * string_nconcat - Function that concatenate string by assigning memory
 * @s1:First string input
 * @s2:Second string input
 * @n:Size in bytes
 * Return: Concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *conc;
	unsigned int s1_len, s2_len;

	/*Check if strings is null then return empty string*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1_len = strlen(s1);
	s2_len = strlen(s2);

	if (n >= s2_len)
		n = s2_len;

	conc = malloc(s1_len + n + 1);
	if (conc == NULL)
		return (NULL);
	memcpy(conc, s1, s1_len);
	memcpy(conc + s1_len, s2, n);
	conc[s1_len + n] = '\0';

	return (conc);
}
