#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatenate the two string
 * using there pointers and the the new concatenated value at point at
 * des and return it
 *
 * @dest: the pionter of the string we are going to concatenate the other to
 * @src: the second stringe pointer
 *
 * Return: the concatenated stringe pointer
 */
char *_strcat(char *dest, char *src)
{
	int size = 0;
	int i = 0;

	while (dest[size] != '\0')
		size++;

	while (src[i] != '\0')
	{
		dest[size] = src[i];
		size++;
		i++;
	}
	dest[size] = '\0';
	return (dest);
}
