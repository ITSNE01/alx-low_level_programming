#include "hash_tables.h"

/**
 * hash_djb2 - hash function to implement djb2 algorithm.
 * @str: pointer to string used to get hash value
 *
 * Return: The new hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
