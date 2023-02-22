#include "main.h"

/**
 * main - Entry point
 *
 * Description: program prints first 50 fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int num1 = 1, num2 = 2, fibb, i;

	printf("%d, %d", num1, num2);
	for (i = 3; i <= 50; i++)
	{
		fibb = num1 + num2;
		printf("%d", fibb);
		if (i != 50)
			printf(", ");
		num1 = num2;
		num2 = fibb;
	}
	printf("\n");
	return (0);
}
