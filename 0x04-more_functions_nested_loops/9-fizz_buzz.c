#include <stdio.h>
#include "main.h"

/**
 * fizz_buzz - is used to print 1 t0 100 and replace
 * mul 3 by Fizz and mul 5 by Buzz and mul 3 and mul 5 by FizzBuzz
 * Return: 1 on success and 0 on error
 */

void print_numbers(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if ((a % 3 == 0) && (a % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (a % 3 == 0)
		{
			printf("Fizz");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", a);
		}
		if (a < 100)
			printf(" ");
	}
	_putchar('\n');
}
