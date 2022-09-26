#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strchr - used to locate a character in a string
 * @s: the string
 * @c: the char to be located
 * Return: pointer to the char or nul
 */
char *_strchr(char *s, char c)
{
	int i;
	int length;

	length = strlen(*s);

	for (i = 0; i < length; i++)
	{
		if (*s[i] == c)
			return (s[i-1]);
	}
	return (NULL)
}
