#include<stdio.h>

/**
 * main - Program that prints it's own name
 * @argc:Holds the number of arguments passed in commandline
 * @argv:array that holds the names of arguments
 * Return: Always 0
 */

int main(int __attribute__((unused)) argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
