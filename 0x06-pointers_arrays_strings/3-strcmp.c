#include "main.h"
#include <stdio.h>
/**
 * _strcmp - to compare two string
 * @s1: the first string
 * @s2: the second string
 * Return: 0 if equal else -1 if s1 is lesser and
 * 1 if s2 is lesser
 */
char *_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
