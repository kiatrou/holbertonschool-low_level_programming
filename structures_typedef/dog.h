#ifndef DOG_H
#define DOG_H

/**
 * struct dog - elements for dog struct
 * @name: pointer to dog's name
 * @age: dog's age
 * @owner: pointer to dog owner
 *
 * Description: This struct holds elements
 * relating to the information of a dog.
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
