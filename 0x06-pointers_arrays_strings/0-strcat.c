#include "main.h"


/**
 * _strcat - Concatenates the src string to the dest string
 * @dest: Pointer to the destionation string
 * @src: Pointer to the source string
 *
 * Return: Pointer to the result string dest
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
