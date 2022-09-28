#include <stdio.h>
#include "main.h"

int actual_prime_number(int n, int x);

/**
 * is_prime_number - check if a number is a prime number
 * @n: the number
 * Return: 0 if is prime else 1
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime_number(n, n - 1));
}

/**
 * actual_prime_number - check for prim number
 * @n: the number
 * @x: the start point
 * Return: 0 if is prime else 1
 */
int actual_prime_number(int n, int x)
{
	if (i == 1)
		return (1);
	if (n % x == 0 && i > 0)
		return (0);
	return (actual_prime_number(n, x - 1));
}
