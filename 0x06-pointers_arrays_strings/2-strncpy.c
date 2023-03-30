#include "main.h"
/**
 * _strncpy - copies a string
 *  @dest: destination of the string
 *  @src: the source of the string
 *  @n: the number of dtring to copied
 *  Return: the dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int destlen = 0;
	int srclen = 0;
	int i;

	for (i = 0 ; src[i] != '\0' ; i++)
		srclen++;
	for (i = 0 ; dest[i] != '\0' ; i++)
		destlen++;
	for (i = 0 ; i <= n ; i++)
		dest[i] = src[i];
	return (dest);
}
