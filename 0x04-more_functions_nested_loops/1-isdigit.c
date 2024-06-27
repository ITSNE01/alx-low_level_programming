#include "main.h"
/**
 * _isdigit - Checks for digits
 * @c : variable to be chacked
 * Return: 1 for true, 0 for false
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
