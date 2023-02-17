#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: program that prints 0, 1 -9
 *
 * Return: Always 0
 */

int main(void)
{
	int digit = 0;

	while (digit < 10)
	{
		putchar('0' + digit);
		if (digit < 9)
		{
			putchar(',');
			putchar(' ');
		}
		++digit;
	}
	putchar('\n');

	return (0);
}
