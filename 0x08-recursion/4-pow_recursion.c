/**
 * _pow_recursion - Calculate x raised to the power of y
 * @x: The base
 * @y: The exponent
 *
 * Return: The result of x^y, or -1 if y is negative.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
	return (-1);
	}
	else if (y == 0)
	{
	return (1);
	}
	else
	{
	return (x * _pow_recursion(x, y - 1));
	}
}