/**
 * _sqrt_recursion - Calculates the natural square root of a number
 * @n: The number to find the square root of
 *
 * Return: The square root of the number, or -1 if there is no natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	if (n == 0 || n == 1)
	{
	return (n);
	}

	return (_sqrt_test(n, 1);
}

/**
 * _sqrt_test - Helper function to find the square root recursively
 * @n: The number to find the square root of
 * @i: The current guess for the square root
 *
 * Return: The square root of the number, or -1 if there is no natural square root.
 */
int _sqrt_test(int n, int i)
{
	if (i * i == n)
	{
	return (i);
	}
	if (i * i > n)
	{
	return (-1);
	}

	return (_sqrt_test(n, i + 1));
}
