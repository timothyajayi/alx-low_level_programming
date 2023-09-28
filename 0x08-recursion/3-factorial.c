#include "main.h"

/**
 * factorial - to Calculate the factorial of a number
 * @n: number for which to calculate the factorial
 *
 * Return: factorial of the number, or -1 if an error occurs.
 */
int factorial(int n)
{
	if (n < 0)
	{
	(return -1);
	}
	else if (n == 0 || n == 1)
	{
	(return 1);
	}
	else
	{
	(return n * factorial(n - 1));
	}
}
