#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Short description
 * @name: first member
 * @age: second member
 * @owner: third member
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * struct dog_t - Short description
 * @name: first member
 * @age: second member
 * @owner: third member
 */
typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
