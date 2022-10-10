#ifndef DOG_H
#define DOG_H
/**
 * struct dog - is used to declear dog structure
 * @name: the name
 * @age: the age
 * @owner: the owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
}


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
