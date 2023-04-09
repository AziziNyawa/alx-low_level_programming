#include "main.h"
#include "stdio.h"
/**
 * main - prints the name of the file
 * @argc: its the argument count
 * @argv: its the string array
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
