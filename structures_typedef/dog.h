#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure containing values holders.
 * @name: Hold Poppy's name.
 * @owner: Hold Poppy's owner.
 * @age: Hold Poppy's age.
 * Return:.
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
