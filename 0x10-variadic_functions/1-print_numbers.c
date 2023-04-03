#include "variadic_functions.h"

/**
  *print_numbers - Function that prints numbers provided as arguments
  *@separator: Pointer separator
  *@n: Start of the input variables
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int i;

	va_start(p, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(p, int));

		/*Print separator*/
		if (separator && i != n - 1)
			printf("%s", separator);
	}
	va_end(p);
	printf("\n");
}
