#include<stdio.h>

/**
 * main - Program that counts the number  of arguments passed
 * @argc:Counts the number of commandline args
 * @argv:array stores the arguments passed
 * Return: Always 0
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	int m, i;

	for (i = 0; i < argc; i++)
		m = i;
	printf("%d\n", m);
	return (0);
}
