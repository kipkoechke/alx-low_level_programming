#include "dog.h"
#include <stdlib.h>
/**
  * init_dog - initialize struct dog.
  * @d: name of the  struct
  * @name: name of the  dog in struct
  * @age: age of the  dog in struct
  * @owner: name of the owner of dog in struct
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
