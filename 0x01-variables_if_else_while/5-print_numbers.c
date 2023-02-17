#include<stdio.h>

/**
 *main - Entry point
 *
 * Description: C program that prints single digit base ten
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int digit = 0;

	while (digit < 10)
	{
		printf("%d", digit);
		++digit;
	}
	printf("\n");
	return (0);
}
