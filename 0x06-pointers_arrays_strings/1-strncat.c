#include "main.h"
#include <stdio.h>
/**
 * _strncat - to concatenate two strings
 * @dest: the destination string
 * @src: the new string
 * @n: number of byte at most to be used for src
 * Return: dest pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int size = 0;
	int i = 0;

	while (dest[size] != '\0')
		size++;
	while (i < n)
	{
		dest[size] = src[i];
		size++;
		i++;
	}
	dest[size] = '\0';
	return (dest);
}
