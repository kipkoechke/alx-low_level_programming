#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Data type of a dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Description: Defines metadata about the dog and type of dog's stuct
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}
dog_t;
