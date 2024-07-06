#include <stdio.h>

/**
 * _strstr - Locates a substring
 * @haystack: Pointer to the main string to be examined
 * @needle: Pointer to the substring to be searched in haystack
 *
 * Return: A pointer to the beginning of the located substring, or NULL if the
 * substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *h;
	char *n;

	while (*haystack)
	{
		h = haystack;
		n = needle;
		while (*n && *h == *n)
		{
			h++;
			n++;
		}
		if (!*n)
		{
			return (haystack);
		}
		haystack++;
	}
	return ('\0');
}
