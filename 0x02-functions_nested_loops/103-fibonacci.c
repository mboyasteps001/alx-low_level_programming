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
	unsigned long num1 = 1, num2 = 2, fibb;
	float sum = 2;

	while (num2 <= 40000000)
	{
		fibb = num1 + num2;
		if (sum > 4000000)
			break;
		if (fibb % 2 == 0)
			sum += fibb;
		num1 = num2;
		num2 = fibb;
	}
	printf("%.0f\n", sum);
	return (0);
}
