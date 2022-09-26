#include <stdio.h>
#include "main.h"
/**
 * _memset - it fills the first n bytes with constant
 * byte b
 * @s: memory area
 * @b: char to be coppied
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[i] = b;
	}
	return (s);
}
