#include <stdio.h>
#include "main.h"

/**
 * print_triangle - is used to print triangle
 * @size: is the size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int i;
	int j;
	int start;

	for (i = 0; i <= size; i++)
	{
		for (j = 0; j <= size; j++)
		{
			start = size - i;
			if (j >= start)
				printf("#");
			printf(" ");
		}
		printf("\n");
	}
}
