#include "main.h"
#include <stdio.h>
/**
 * _atoi - Convert a string to an integer.
 *
 * @s: input string
 *
 * Return: integer
 */

int  _atoi(char *s)
{
	int num, result, i;

	result = 0;
	num = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			num++;
		}
		if (s[i] > 47 && s[i] < 58)
		{
			while (s[i] > 47 && s[i] < 58)

				result = result * 10 - (s[i++] - 48);
					break;
		}
	}
	return (result *= num % 2 == 0 ? -1 : 1);
}
