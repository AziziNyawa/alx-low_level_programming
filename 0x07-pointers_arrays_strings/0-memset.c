#include "main.h"
/**
 * _memset - fills n number bytes to s
 * @s: array filled with constant byte b
 * @b: the constant byte
 * @n: the number of times the b bytes are filled to b
 * Return: the s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		s[i] = b;
	}
	return (s);
}
