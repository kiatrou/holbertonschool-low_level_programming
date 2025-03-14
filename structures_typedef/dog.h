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
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
