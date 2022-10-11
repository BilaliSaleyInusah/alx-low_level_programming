#include <stdio.h>
#include "main.h"
/**
 * print_dog - to print the variables in dog struct
 * @d: the dog struct
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner == "(nil)";
	printf("Name: %s\nAge: %lf\nOwner: %s\n", d->name, d->age, d->owner);
}
