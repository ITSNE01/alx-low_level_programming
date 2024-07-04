#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: input string
 * Return: str value
 */
char *leet(char *str)
{
	int i, j;
	char c1[] = "aAeEoOtTlL";
	char c2[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == c1[j])
			{
				str[i] = c2[j];
			}
		}
	}
	return (str);
}
