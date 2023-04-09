#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - prints that multiplies two numbers
 * @argc: argument count
 * @argv: the char array
 * Return: its return i when argc is less then 2
 * and 0 when argc is 3
 */
int main(int argc, char **argv)
{
	int n, m, diff;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	m = atoi(argv[2]);
	diff = n * m;

	printf("%i\n", diff);

	return (0);
}
