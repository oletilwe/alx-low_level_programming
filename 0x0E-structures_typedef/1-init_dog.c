#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
* init_dog - a funtion that initializes a variable
* @d: pointer to struct dog to initialize
* @name: name to initilize
* @age: age to initilize
* @owner: owner to initilize
* Description: long description
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
d = malloc(sizeof(struct dog));
d->name = name;
d->age = age;
d->owner = owner;
}
