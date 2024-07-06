#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: Pointer to the string to be scanned
 * @accept: Pointer to string containing the list of chars to match in s
 *
 * Return: The number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *a;

	while (*s)
	{
		for (a = accept; *a; a++)
		{
			if (*s == *a)
			{
				break;
			}
		}
		if (*a == '\0')
		{
			return (count);
		}
		count++;
		s++;
	}
	return (count);
}
