#include "main.h"
#include <stdio.h>

/**
 * prcheck - Helper function to check if a number is prime
 * @n: The number to check
 * @i: The current divisor to test
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */
int prcheck(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n == i)
		return (1);
	if (n % i == 0)
		return (0);
	return (prcheck(n, i + 1));
}

/**
 * is_prime_number - Checks if an integer is a prime number
 * @n: The number to check
 *
 * Return: 1 if the input integer is a prime number, otherwise 0
 */
int is_prime_number(int n)
{
	return (prcheck(n, 2));
}
