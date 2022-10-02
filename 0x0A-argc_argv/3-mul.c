#include <stdio.h>
#include <stdlib.h>
/**
 *main - print the multiplecation of the two int arg
 *@argc: number of argument entered
 *@argv: the pointer to the values entered
 *Return: ans or error if arg is less than 3
 */
int main(int argc, char *argv[])
{
	int a , b;

	if (argc < 3)
		printf("Error\n");
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
	}
	return (0);
}
