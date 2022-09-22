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
	int i = 0;
	int j = 0;

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++
	if (i > j)
	{
		return (1);
	}
	else if (j > i)
	{
		return (-1);
	}
	else
	{
		i = 0;

		while (s1[i] == s2[i])
			i++;
		if (s1[i] > s2[i])
			return (1);
		else if (s1[i] > s2[i])
			return (-1);
		else
			return (0);
	}
}
