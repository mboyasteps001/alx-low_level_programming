#include <stdio.h>
#include <stdlib.h>

/**
  *pre_main - Function that runs before main function
  *Return: The string
  */

void __attribute__((constructor)) pre_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
