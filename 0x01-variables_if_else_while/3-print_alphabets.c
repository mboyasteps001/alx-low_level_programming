#include<stdio.h>
#include<ctype.h>
/**
 * main - Entry point
 *
 * Description: C program that print alphabet in lowercase and uppercase
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char chr = 'a';
	char Uchr = 'A';

	/*Prints lower case letters*/
	while (chr <= 'z')
	{
		putchar(chr);
		++chr;
	}
	/*prints upper case letters*/
	while (Uchr <= 'Z')
	{
		putchar(Uchr);
		++Uchr;
	}
	putchar('\n');
	return (0);
}
