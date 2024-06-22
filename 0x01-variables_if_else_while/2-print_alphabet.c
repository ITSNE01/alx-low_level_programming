#include<stdio.h>
/**
 * main - Entry point
 * Description : This program prints all lowercase letters
 * of the alphabet, followed by a newline.
 * Return: Always return 0 (Success)
 */
int main(void)
{
	char A;

	A = 'a';
	while
		(A <= 'z') {
			putchar(A);
			A++;
		}
	putchar('\n');
	return (0);
}
