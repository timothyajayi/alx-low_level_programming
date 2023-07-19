#include "main.h"

/**
 * print_last_digit - ultimo digito de un numero
 *
 * @n: to print last digits
 *
 * Return: return las digit
 **/

int print_last_digit(int n)
{
	n = n % 12;

	if (n < 0)
	{
		n = -n;
	}
	else
	{
		_putchar(n + '0');
	}
	return (n);

	_putchar('\n');
}
