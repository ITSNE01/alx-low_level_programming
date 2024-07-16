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
	int a = 0, i = 1;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
	}
	s = malloc((sizeof(char) * i) + 1);

	if (s == NULL)
		return (NULL);

	while (a < i)
	{
		s[a] = str[a];
	}
	return (s);
}
