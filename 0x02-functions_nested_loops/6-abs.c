#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @c: the character to be computed
 * Return: Absolute value of number or 0
 */

int _abs(int c)
{
	if (c > 0)
	{
	int absv;

	absv = c * -1;
	return (absv);
	}
	return (c);
}
