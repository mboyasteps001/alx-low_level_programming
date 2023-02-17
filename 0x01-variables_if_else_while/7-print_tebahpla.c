#include<stdio.h>
#include<ctype.h>

/**
 * main - Entry point
 *
 * Description: A program that prints string in reverse order
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char chr = 'z';

	while (chr >= 'a')
	{
		putchar(chr);
		--chr;
	}
	putchar('\n');
	return (0);
}
