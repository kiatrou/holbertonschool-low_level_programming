#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initialises a variable of
 * type struct dog
 * @d: pointer to struct dog
 * @name: pointer to name
 * @age: age of dog
 * @owner: pointer to owner
 *
 * Return: none
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/*Check to prevent seg faults*/
	if (d == NULL)
	{
		return;
		/*this will exit functionif pointer is NULL*/
	}

	/*Using -> dereferences the pointer and accesses the struct*/
	d->name = name;
	d->age = age;
	d->owner = owner;
}
