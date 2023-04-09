#include "main.h"
#include <stdio.h>
/**
 * main - prints the number of arguments
 * @argc: the number of agruments
 * @argv: the array string
 * Return: always zero
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
