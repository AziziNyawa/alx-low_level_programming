#include "main.h"
/**
 * _print_rev_recursion - _print_rev_recursion form
 * @s: this the pointer to a string
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
