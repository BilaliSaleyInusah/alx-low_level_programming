#include <stdio.h>
#include "main.h"

/**
 * print_line - is used to print _ character n times
 * @n: is the number of times to print _
 * Return: void
 */

void print_line(int n)
{
	int i;

	i = 0;
	if (n > 0)
	{
		while (i <= n)
		{
			_putchar('_');
			i++;
		}
	}
	_putchar('\n');
}
