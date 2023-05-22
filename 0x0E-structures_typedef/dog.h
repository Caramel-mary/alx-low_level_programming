#ifndef _HEADER_
#define _HEADER_

/**
 * struct dog - dog features
 * @name: is the name of the dog
 * @age: is the age of the dog
 * @owner: is the owner of dog
 *
 * Description: is the features of a dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for dog strcture
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
