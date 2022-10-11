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

/**
 * changing new type name for struct dog to dog_t
 * dog_t - new name for struck dog
 */
typedef struct dog dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *ownder

#endif
