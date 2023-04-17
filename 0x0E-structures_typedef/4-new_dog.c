#include "dog.h"
#include <stdlib.h>
/**
  * new_dog - function that creates a new dog.
  * @name: struct  name
  * @age: struct  age
  * @owner: struct  owner
  * Return: returns pointer of datatype dog
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	int len1, len2, i;
	dog_t *doggy;

	len1 = len2 = 0;
	while (name[len1++])
		;
	while (owner[len2++])
		;
	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);

	doggy->name = malloc(len1 * sizeof(doggy->name));
	if (doggy == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		doggy->name[i] = name[i];

	doggy->age = age;

	doggy->owner = malloc(len2 * sizeof(doggy->owner));
	if (doggy == NULL)
		return (NULL);
	for (i = 0; i < len2; i++)
		doggy->owner[i] = owner[i];
	return (doggy);
}
