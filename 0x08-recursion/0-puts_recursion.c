#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - printing a string newline at the end
 * @s: the string
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return (0);
	}
	_putchar(*s)
	_puts_recursion(*s + 1);
}
