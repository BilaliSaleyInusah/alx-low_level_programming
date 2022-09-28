#include <stdio.h>
#include "main.h"
/**
 * _pow_recursion - calculate a factorial num for num
 * @n: the base number
 * @y: the exponent number
 * Return: x^y
 */
int _pow_recursion(int n, int y)
{
	if (y < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * _pow_recursion(n, y - 1));
}
