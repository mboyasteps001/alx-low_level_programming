#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - Checkif the number is prime
 * @n: The number to be checkeid
 * Return: 0 if its not prime 1 if its prime
 */
int is_prime_number(int n)
{
	if (n <= 0)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - Function that evaluate the prime number
 * @n:Number to evaluate
 * @i:iteration variable
 * Return: 1 if its prime, 0 if not
 */

int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}










