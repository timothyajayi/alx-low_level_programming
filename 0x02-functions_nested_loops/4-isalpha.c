#include "main"

/**
 * _isalpha - check the the entry to deteminate if is lower or upper
 *
 * description: check for the case
 * Return: Always 0.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
	return (0);
	}
	_puthchar('\n')
}
