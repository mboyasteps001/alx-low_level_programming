#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: C program that prints all alphabet inlowercase
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char chr = 'a';

	while (chr <= 'z')
	{
		putchar(chr);
		++chr;
	}
	putchar('\n');
	return (0);
}
