# include <unistd.h>

/**
 * _putchar - Function write a char in standard output
 * @c: Input parameter
 * Return: 1 on succes and -1 on fail
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
