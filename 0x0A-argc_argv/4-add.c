#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

/**
 * num - function that check if the arguments are number
 * @n: Numbers input
 * Return: 0 on succes
 */
int num(char n[])
{
	int i, len = strlen(n);

	for (i = 0; i < len; i++)
	{
		if (!isdigit(n[i]))
			return (1);
	}
	return (0);
}


/**
 * main - program that add positive integer in commandline args
 * @argc:commandline argumens counter
 * @argv:Array stores argumetns
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i, sum;

	if (argc == 1)
		printf("0\n");
	else
	{
		sum = 0;
		for (i = 1; i < argc; ++i)
		{
			if (num(argv[i]) == 0)
				sum += atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
