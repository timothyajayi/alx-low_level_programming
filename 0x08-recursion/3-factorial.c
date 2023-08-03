#include "main.h"

/**
  * factorial - Calculate the factorial of a number
  * @n: the number to calculate the factorial
  *
  * Return: integer value
  */
int factorial(int n)
{
	if (n < 1)
	{
	return (1);
	}

	else
	{
	return (n * factorial(n - 1));
	}
}
