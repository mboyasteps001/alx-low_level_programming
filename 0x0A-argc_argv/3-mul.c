#include<stdio.h>
#include<stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argc:argumens counter
 * @argv:arguments storage in the array
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int n;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		n = (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n", n);
	}
	return (0);
}
