#include <stdio.h>

/**
 * main - Print the max factor of a number.
 * @n - to write prime number.
 * Return: 0.
 */

int main(void)
{
	long int n, d;

	n = 612852475143;
	for (d = 2; d <= n; d++)
	{
		if (n % d == 0)
		{
			n /= d;
			d--;
		}
	}
	printf("%ld\n", d);
	return (0);
}
