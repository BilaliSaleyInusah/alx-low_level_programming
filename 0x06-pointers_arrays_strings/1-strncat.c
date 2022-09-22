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
	return (strncat(dest, src, n));
}
