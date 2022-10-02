#include <stdio.h>
#include <stdlib.h>

/**
 * checker - check if a string is a digit
 * @s: the input string
 *  Return: 0 if success or 1
 */
int checker(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < '0' || s[i] > '9')
			return (1);
	}
	return (0);
}

/**
 *main - print the multiplecation of the two int arg
 *@argc: number of argument entered
 *@argv: the pointer to the values entered
 *Return: ans or error if arg is less than 3
 */
int main(int argc, char *argv[])
{
	int a, sum;

	sum = 0;
	if (argc < 3)
		printf("0\n");
	else
	{
		int i;

		for (i = 1; i < argc; i++)
		{
			if (checker(argv[i]) == 1)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				a = atoi(argv[i]);
				sum = sum + a;
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
