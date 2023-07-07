#include "hash_tables.h"

/**
 * hash_djb2 - function it generates the random string
 *
 * @str: str
 * Return: hash number
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int i;

	hash = 5381;
	while ((i = *str++))
	{
		hash = ((hash << 5) + hash) + i; /* hash * 33 + c */
	}
	return (hash);
}
