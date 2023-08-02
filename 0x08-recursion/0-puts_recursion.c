#include "main.h"
/**
 * _puts_recursion - to print a string
 * @s: character to be printed
 *
 * Return: always retunr 0
 */
void _puts_recursion(char *s)
{
	{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	s++;
	_puts_recursion(s);

}
}
