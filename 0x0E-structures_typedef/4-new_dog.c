#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - function with 4 arguments
 * @d: structure pointer
 * @name: pointer character
 * @age: float type argument
 * @owner: pointer type character
 *
 * Description: initialize a variable of type
 * Return: na
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
