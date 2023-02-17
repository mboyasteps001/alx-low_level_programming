#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: C program that prints digit from 0-9 using putchar
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int digit = 0;

	while (digit < 10)
	{
		putchar('0' + digit);
		++digit;
	}
	putchar('\n');
	return (0);
}
