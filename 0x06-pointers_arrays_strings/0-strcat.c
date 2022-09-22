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
	return (strcat(dest, src));
}
