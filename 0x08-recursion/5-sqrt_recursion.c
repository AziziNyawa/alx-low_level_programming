#include "main.h"

/*
 *look_root - finds the square root of a given number
 *
 *Return: the final value
 *
 */int look_root(int n, int root)
{
	if (root * root > n)
		return (-1);

	if (root * root == n)
		return (root);

	return (look_root(n, root + 1));
}

/*
 * _sqrt_recursion - returns the natural square root of a number
 * Return: int
 */int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (look_root(n, 0));
}
