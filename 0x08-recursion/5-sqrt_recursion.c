#include "main.h"
#include <stdio.h>

/**
 * helper - Helper function to find the square root
 * @n: The number to find the square root of
 * @i: The current number to test as the square root
 *
 * Return: The natural square root of n, or -1 if no natural square root exists
 */
int helper(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (helper(n, i + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to find the square root of
 *
 * Return: The natural square root of n, or -1 if no natural square root exists
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (helper(n, 0));
}

