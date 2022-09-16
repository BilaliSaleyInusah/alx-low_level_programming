#include <stdio.h>
#include "main.h"

/**
 * print_square - is used to print square
 * @size: is the size of the square
 * Return: void
 */

void print_diagonal(int size)
{
	int i;
	int j;

	i = 0;
	if (n > 0)
	{
		while (i <= n)
		{
			for (j = 0; j <= n; j++)
			{
				if (i == j)
					_putchar(35);
			}
			_putchar('\n');
			i++;
		}
	}
}
