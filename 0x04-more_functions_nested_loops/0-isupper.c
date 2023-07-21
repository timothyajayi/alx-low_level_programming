#include "main.h"

/**
 * _isupper - checks if uppercase
 * @c: character to check uppercase
 *
 * Return: return 1 if uppercase 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
