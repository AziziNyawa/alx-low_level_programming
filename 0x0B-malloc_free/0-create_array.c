#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array with char c
 * @size: the size of the array to be created
 * @c: the char to fill the array
 * Return: the pointer to an array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *b;

	if (size == 0)
		return (NULL);
	b = malloc(size * sizeof(char));
	if (b == 0)
		return (NULL);
	for (i = 0 ; i < size ; i++)
		b[i] = c;
	return (b);
}
