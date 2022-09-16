#include <stdio.h>
#include "main.h"

/**
 * print_numbers - is used to print numbers from 0 to 9 excluding 2 and 4
 * Return: 1 on success and 0 on error
 */

void print_numbers(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		if (a == 50 || a == 52)
			continue;
		_putchar(a);
	}
	_putchar('\n');
}
