#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: C program prints all aphabets except q and e
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char chr = 'a';

	while (chr <= 'z')
	{
		if (chr == 'q' || chr == 'e')
			++chr;
		putchar(chr);
		++chr;
	}
	putchar('\n');
	return (0);
}
