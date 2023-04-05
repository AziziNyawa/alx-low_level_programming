#include "main.h"
/**
 * factorial - a function to return factorial of number
 * @n: the number for factorial to be found
 * Return: factorial of the number
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
