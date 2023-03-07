#include "main.h"
/**
 * _strspn - Function that return the bytes of substring
 * @s:The string onput
 * @accept: The string to be drtemined in the S
 * Return:The bytes of the accept string from S
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, f;

	for (i = 0; s[i] != '\0'; ++i)
	{
		f = 1;
		for (j = 0; s[j] != '\0'; ++j)
		{
			if (s[i] == accept[j])
			{
				f = 0;
				break;
			}
		}
		if (f == 1)
			break;
	}
	return (i);
}
