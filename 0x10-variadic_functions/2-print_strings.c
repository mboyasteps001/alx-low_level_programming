#include "variadic_functions.h"

/**
  *print_strings - Function that prints string arguments
  *@separator: Pointer to string separator
  *@n: Start of the arguments input
  *Return: Nothing
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int i;
	char *str;

	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(p, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (separator && i != n - 1)
			printf("%s", separator);
	}
	va_end(p);
	printf("\n");
}
