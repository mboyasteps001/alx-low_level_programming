#include "variadic_functions.h"

/**
  *sum_them_all - Function that sums all parameters
  *@n: The start of all variables
  *Return: The sum
  */

int sum_them_all(const unsigned int n, ...)
{
	va_list number;
	unsigned int i, sum = 0;

	va_start(number, n);
	for (i = 0; i < n; i++)
		sum += va_arg(number, int);
	va_end(number);
	return (sum);
}
