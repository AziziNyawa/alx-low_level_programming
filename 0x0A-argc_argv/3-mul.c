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
int main(int argc, char *argv[])
{
	int n1 = 0, n2 = 0;

	if (argc == 3)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		printf("%d\n", n1 * n2);
	}
	else
	{
		printf("Error");
		return (1);
	}
	return (0);
}
