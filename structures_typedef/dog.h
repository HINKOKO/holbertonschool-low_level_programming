#ifndef __DOG__
#define __DOG__
/**
 * struct dog - create a struct for common
 * details about a dog
 * @name: dog's name
 * @owner: his/her master
 * @age: its age
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

void free_dog(dog_t *d);

#endif
