#include "main.h"
#include <stdio.h>

/**
 * puts_half - Prints the second half of a string followed by a new line
 * @str: Pointer to the string
 */
void puts_half(char *str)
{
	int l = 0;
	int s;

	while (str[l] != '\0')
	{
		l++;
	}
	if (l % 2 == 0)
	{
		s = l / 2;
	}
	else
	{
		s = (l - 1) / 2 + 1;
	}
	for (; s < l; s++)
	{
		_putchar(str[s]);
	}
	_putchar('\n');
}
