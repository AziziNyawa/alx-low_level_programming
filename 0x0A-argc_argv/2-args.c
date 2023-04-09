#include "main.h"
#include <stdio.h>
/**
 * main - prints the arguments it receives
 * @argc: the argument count
 * @argv: the argument character array
 * Return: always 0
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc ; i++)
		printf("%s\n", argv[i]);
	return (0);
}
