#ifndef DOG_H
#define DOG_H

/**
 * struct dog -  to define structure of dog
 * @name: name of dog
 * @age: age of dogs
 * @owner: the owner of dogs
 *
 */

	typedef struct dog
	{
		char *name;
		float age;
		char *owner;
	} dog;

	typedef dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

int _putchar(char c);

#endif
