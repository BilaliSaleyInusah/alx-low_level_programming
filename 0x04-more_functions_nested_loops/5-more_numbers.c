#include <stdio.h>
#include "main.h"

/**
 * more_numbers - is used to print numbers from 0 to 14, 10 times
 * Return: void
 */

void more_numbers(void)
{
	int a;
	int b;

	for (a = 48; a <= 57; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b >= 10)
				_putchar(b / 10);
			_putchar(b % 10);
		}
		_putchar('\n');
	}
}
