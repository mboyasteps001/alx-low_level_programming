#include<stdio.h>

/**
 * main - Main entry
 *
 * Description: Program that prints all base16 numbers
 *
 * Return: Always 0
 *
 */

int main(void)
{
	int digit = 0;

	while (digit <= 15)
	{
		if (digit < 10)
			putchar('0' + digit);
		else
			putchar('a' + digit - 10);
		++digit;
	}
	putchar('\n');
	return (0);
}
