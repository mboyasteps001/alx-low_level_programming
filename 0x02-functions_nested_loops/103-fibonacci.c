#include "main.h"

/**
 * main - Entry point
 *
 * Description: program that find sum of the fibonacci series
 *
 * Return: Always 0
 */

int main(void)
{
	long int num1 = 1, num2 = 2, sum = 2, fibb;

	while (num2 <= 40000000)
	{
		fibb = num1 + num2;
		if (fibb % 2 == 0)
			sum += fibb;
		num1 = num2;
		num2 = fibb;
	}
	printf("%ld\n", sum);
	return (0);
}
