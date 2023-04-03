#include "main.h"
/**
 * _strchr - finds character c in string s
 * @s: the string where the character c is searched
 * @c: the character to be searched in s
 * Return: the string plus the index when c is found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0 ; s[i] >= '\0' ; i++)
		if (s[i] == c)
			return (s + i);
	return ('\0');
}
