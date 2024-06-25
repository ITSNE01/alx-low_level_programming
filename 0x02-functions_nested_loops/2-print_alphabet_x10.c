#include "main.h"
/**
 * print_alphabet_x10 - print alphabet x10 times
 * Return:void
 */

void print_alphabet_x10(void)
{
	int X = 0;
	char c;

	while (X < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		X++;
	}
}
