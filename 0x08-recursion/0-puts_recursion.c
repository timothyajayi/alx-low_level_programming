#include "main.h"
/**
 * _puts_recursion - to print a string
 * @s: character to be printed
 *
 * Return: always retunr 0
 */
void _puts_recursion(char *s)
{
	int i = 0;

	while (s[i] != '\n' && s[i] != '\0')
	{
	_putchar(s[i]);
	_putchar('\n');
	i++;
	}
}
