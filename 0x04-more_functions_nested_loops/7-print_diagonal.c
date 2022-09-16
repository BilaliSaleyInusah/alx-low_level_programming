#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - is used to print \ character n times to form diagonal
 * @n: is the number of times to print _
 * Return: void
 */

void print_diagonal(int n)
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
					_putchar('\\');
				else
					_putchar(' ');
			}
			_putchar('\n');
			i++;
		}
	}
}
