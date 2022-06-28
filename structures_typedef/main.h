#ifndef __DOG__
#define __DOG__

struct dog
{
	 char *name;
	 char *owner;
	 float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif
