#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints the elements from
 * struct dog
 * @d: pointer to struct dog
 *
 * Return: none
*/
void print_dog(struct dog *d)
{
	/*If pointer is NULL, do nothing*/
	if (d == NULL)
	{
		return;
	}

	/*Print name, if NULL print (nil)*/
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}

	/*Print age*/
	printf("Age: %.6f\n", d->age);

	/*Print owner, if NULL print (nil)*/
	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
