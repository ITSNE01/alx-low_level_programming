#include<stdio.h>
/**
 * main - Entry point
 * This program prints alphabats in reverse.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char Z;

	for (Z = 'z'; Z >= 'a'; Z--)
	{
		putchar(Z);
	}
	putchar('\n');
	return (0);
}
