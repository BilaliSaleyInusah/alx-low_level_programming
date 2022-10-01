#include "main.h"
/**
 * _islower - check if a number is lowercase
 * Return: 1 in true
 * 0 if false
 * @c: an integer
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
