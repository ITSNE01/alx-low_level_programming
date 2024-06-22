#include<stdio.h>
/**
 * main - Entry point
 * This program does the same as last one but no 
 * char variables.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int X;
	
	for (X = 0; X < 10; X++)
	{
		putchar(X + '0');
	}
	putchar('\n');
	return(0);
}
