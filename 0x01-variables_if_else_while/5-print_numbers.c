#include<stdio.h>
/**
 * main - Entry point
 * This program prints all digit number of base
 * of base 10 starting from 0
 * Return : Always 0 (Success)
 */
int main(void)
{
	int D;

	for (D = 0 ; D < 10; D++)
	{
		putchar(D + '0');
	}
	putchar('\n');
	return (0);
}
