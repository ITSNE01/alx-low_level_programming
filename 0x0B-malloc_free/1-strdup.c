#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates a string
 * @str: The string to duplicate
 *
 * Return: A pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int i, l = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[l] != '\0')
	{
		l++;
	}
	s = malloc((l + 1) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= l; i++)
	{
		s[i] = str[i];
	}
	return (s);
}
