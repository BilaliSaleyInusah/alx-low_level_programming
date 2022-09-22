#include "main.h"
#include <stdio.h>
/**
 * _strncat - to copy string
 * @dest: the destination string
 * @src: the source
 * @n: number of byte at most to be coppied
 * Return: dest pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[size] = '\0';
		i++;
	}
	return (dest);
}
