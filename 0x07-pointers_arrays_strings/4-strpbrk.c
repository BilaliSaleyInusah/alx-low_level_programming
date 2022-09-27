#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strpbrk - used to locate the first occurrence of a string in accepted
 * @s: the string
 * @accept: the accepted character
 * Return: pointer to the char or nul
 */
char *_strpbrk(char *s, char c)
{
	int i, j, k;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j]);
			{
				return (*s);
			}
		}
		*s++;
	}
	return (NULL);
}
