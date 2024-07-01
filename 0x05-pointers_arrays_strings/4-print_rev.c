#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints a string in reverse followed by a new line
 * @s: Pointer to the string
 * Return: void
 */
void print_rev(char *s)
{
	int rl = 0;

	while (s[rl] != '\0')
	{
		rl++;
	}
	for (rl -= 1; rl >= 0; rl--)
	{
		_putchar(s[rl]);
	}
	_putchar('\n');
}
