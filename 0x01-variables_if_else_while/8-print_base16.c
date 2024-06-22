#include<stdio.h>
/**
 * main - Entry point
 * This program prints hexadecimals
 * Return: Always 0 (Success)
 */
int main(void)
{
	char H;

	for (H = '0'; H <= '9'; H++)
	{
		putchar(H);
	}
	for (H = 'a'; H <= 'f'; H++)
	{
		putchar(H);
	}
	putchar('\n');
	return (0);
}
