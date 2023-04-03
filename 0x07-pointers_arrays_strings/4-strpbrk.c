#include "main.h"
/**
 * _strpbrk - searches for a string of a particular bytes
 * @s: the string to be searched
 * @accept: the set of bytes to be used for searcng
 * Return: If a set of bytes is matched a pointer is retunred
 * a null bytes if returned is no match
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0 ; accept[i] ; i++)
			if (*s == accept[i])
				return (s);
		s++;
	}
	return ('\0');
}
