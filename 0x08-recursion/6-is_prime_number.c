#include "main.h"
/**
 * is_prime_number - Checks if an integer is a prime number
 * @n: The integer to check
 *
 * Return: 1 if the integer is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
	return (0);
	}
	if (n <= 3)
	{
	return 1;
	}

	for (int i = 2; i * i <= n; i++)
	{
	if (n % i == 0)
	{
	return (0);
	}
	}

	return 1;
}
