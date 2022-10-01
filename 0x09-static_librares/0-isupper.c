#include <stdio.h>
#include "main.h"

/**
 * _isupper - is used to check if a character is upper case letter
 * @c: is the charater passed unto the function
 * Return: 1 if c is uppercase else 0
 */

int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}
