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
	int ch;

	while (true)
	{
		ch = ++*s;
		if (ch == c)
		{
			return (s);
		}
		if (ch == 0)
		{
			return (NULL);
		}
	}
}
