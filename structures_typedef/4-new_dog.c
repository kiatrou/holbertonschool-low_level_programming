#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - counts str len
 * @s: pointer to str
 *
 * Return: length of str
*/
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
/**
 * _strcpy - copies pointed string
 * @dest: where copied string goes
 * @src: where copying string from
 *
 * Return: copied string
*/
char *_strcpy(char *dest, char *src)
{
	char *original_dest = dest;

	/*Repeat each character of src string*/
	while (*src != '\0')
	{
		*dest = *src;
		/*Copies characters from src to dest*/
		dest++;
		/*Moves dest pointer to next position*/
		src++;
		/*Moves src pointer to next character*/
	}
	*dest = '\0';
	/*Null-terminate the dest string*/
	return (original_dest);
}
/**
 * new_dog - creates a new dog
 * @name: pointer to name
 * @age: age
 * @owner: pointer to owner
 *
 * Return: new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	int name_len = 0;
	int owner_len = 0;

	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}
	/*Name stuff*/
	name_len = _strlen(name);
	new_dog->name = malloc(name_len + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	_strcpy(new_dog->name, name);

	/*Owner Stuff*/
	owner_len = _strlen(owner);
	new_dog->owner = malloc(owner_len + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	_strcpy(new_dog->owner, owner);

	new_dog->age = age;

	return (new_dog);
}
