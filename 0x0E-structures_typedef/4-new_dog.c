#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function with 3 arguments
 * @name: char type pointer
 * @age: float type
 * @owner: char type pointer
 *
 * Description: creates a new dog
 * Return: NULL if fail or pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *Mydog;

	Mydog = malloc(sizeof(dog_t));

	Mydog->name = name;
	Mydog->age = age;
	Mydog->owner = owner;

	if (Mydog)
		return (Mydog);
	else
		return	(NULL);
}
