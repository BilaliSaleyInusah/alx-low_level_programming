#include <stdio.h>
#include "main.h"
/**
 * init_dog - is going to used to initiate dog structure
 * @d: a dog struct
 * @name: a pointer to the name variable
 * @age: the age
 * @owner: the owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
