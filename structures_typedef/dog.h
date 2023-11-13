#ifndef DOG_H
#define DOG_H

/**
* struct dog - Dog information
* @name: Dog's name of type char
* @age: Dog's age of type float
* @owner: Dog's owner of type char
*/

struct dog
{
	char *name;
	float age;
	char *owner;
} my_dog;

/**
 * dog_t - Typedef for struct
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
