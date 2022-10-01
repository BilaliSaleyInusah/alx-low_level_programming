#include <stdio.h>
#include "main.h"
/**
 * _memcpy - copy n bytes from a source to a destination
 * @src: the source
 * @dest: the destination
 * @n: number of bytes
 * Return: des
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j = 0;

	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
