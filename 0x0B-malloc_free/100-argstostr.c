#include "main.h"

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The number of arguments passed to the program.
 * @av: An array of strings containing the arguments.
 *
 * Return: A pointer to the concatenated string, or NULL if it fails.
 *         The string should be freed with free() when it is no longer needed.
 */
char *argstostr(int ac, char **av)
{
	int len = 0;
	int pos = 0, i;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		len += strlen(av[i]) + 1;

	str = malloc(len * sizeof(char) + 1);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		strcpy(str + pos, av[i]);
		pos += strlen(av[i]);
		str[pos++] = '\n';
	}

	return (str);
}

