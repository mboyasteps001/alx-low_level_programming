#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints the different sizes of the data types
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	/*sizeof evaluate the size of a vaariable*/
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a double: %lu byte(s)\n", sizeof(double));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of float: %lu byte(s)\n", sizeof(float));
	return (0);
}
