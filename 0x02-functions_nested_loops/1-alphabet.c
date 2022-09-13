#include "main.h"
/**
 * main - print _putchar follow by space
 * Return: 1 when successfuly run
 */
int main(void)
{
	char ch;

	for (ch='a'; ch <='z'; ch++)
		_putchar(ch);
	_putchar('\n');
	return (0);
}
