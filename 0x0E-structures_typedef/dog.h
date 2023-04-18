#ifndef HEADER_H
#define HEADER_H

/**
 * struct dog - dog
 * @name: name
 * @age: age
 * @owner: owner
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* HEADER_H */
