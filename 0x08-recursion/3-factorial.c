#include "main.h"

/**
 * factorial - prints factorial of an integer
 * @n: parameter of the function
 *
 * Return: Factorial of n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n	- 1));
	}
}
