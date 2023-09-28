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
	return n;
	}

	int l = 0;
	int m = n;
	int result = -1;

	while (l <= m) {
	int mid = l + (m - l) / 2;
	long long square = (long long)mid * mid;

	if (square == n)
	{
	return mid;
	}
	if (square < n)
	{
	l = mid + 1;
	result = mid;
	}
	else
	{
	m = mid - 1;
	}
	}

	return result;
}
