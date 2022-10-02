#include <stdio.h>
/**
 *main - print the number of argument
 *@argc: number of argument entered
 *@argv: the pointer to the values entered
 *Return: 0
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	argv = argv;
	return (0);
}
