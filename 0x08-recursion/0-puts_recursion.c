#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: Parameter to treat
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar (*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
