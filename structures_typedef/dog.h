/**
 * struct dog - a struct that stores basic information about a dog
 * @name: First member, pointer to a string for the dog's name
 * @age: Second member, float representing the dog's age
 * @owner: Third member, pointer to a string for the owner's name
 *
 * Description: This structure is used to group the identity, age,
 * and ownership details of a canine.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

int main(void)
{
    struct dog my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
