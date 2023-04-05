#include "main.h"
/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: the pointer to a string that is  to be printed
 * Return: the string when the character is end
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar (*s);
	_puts_recursion(s + 1);
}
