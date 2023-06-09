#include<stdio.h>

/**
 * main - program that prints all arguments
 * @argc:The arguments counter
 * @argv:Array stores arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
