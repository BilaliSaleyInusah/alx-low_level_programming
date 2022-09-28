#include <stdio.h>
#include "main.h"

int actual_recursion(int n, int x);

/**
 * _sqrt_recursion - calculate the sqrt
 * @n: the number
 * Return: sqrt of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - calculating sqrt
 * @n: the number
 * @x: the start point
 * Return: the sqrt of n
 */
int actual_sqrt_recursion(int n, int x)
{
	if (x * x > n)
		return (-1);
	if (x * x == n)
		return (x);
	return (actual_sqrt_recursion(n, x + 1));
}
