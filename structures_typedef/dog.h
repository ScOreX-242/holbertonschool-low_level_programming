#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A struct creating a basic profile for a dog
 * @name: The name of the dog (string)
 * @age: The age of the dog (float)
 * @owner: The name of the owner (string)
 *
 * Description: This structure stores basic identifying information
 * about a dog, including its name, age, and owner's name.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


#endif /* DOG_H */
