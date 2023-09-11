#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initialized the data structures members
 * @d: copy of the data structure
 * @name: copy of the struct members
 * @age: copy of the float member
 * @owner: copy of the owner member
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
