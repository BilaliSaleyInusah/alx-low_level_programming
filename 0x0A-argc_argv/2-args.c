#include <stdio.h>
/**
 * main - print list of all the argument
 *@argc: number of argument entered
 *@argv: the pointer to the values entered
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
