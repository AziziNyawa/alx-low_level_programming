#include "main.h"
int _root_sqrt(int x, int y);

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 *@n: first value
 *
 * Return: the final solution
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_root_sqrt(n, 1));
	}
}

/**
 * _root_sqrt - calculate the square root
 *@x: value to calculate  the square root
 *@y: variable to cont
 *
 * Return: the number with the solution
 */
int _root_sqrt(int x, int y)
{
	if (x * x == y)
	{
		return (y);
	}
	else if (x * x > y)
	{
	return (-1);
	}
	else
	{
		return (_root_sqrt(x, y + 1));
	}
}
