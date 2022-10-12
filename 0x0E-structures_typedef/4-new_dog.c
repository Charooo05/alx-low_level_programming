#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: new dog struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *c_dog;
	char *d, *s;

	c_dog = malloc(sizeof(dog_t));
	if (c_dog == NULL)
		return (NULL);
	d = malloc((strlen(name) + 1) * sizeof(char));
	if (d == NULL)
	{
		free(c_dog);
		return (NULL);
	}
	for (i = 0; *name; i++, *name++)
		d[i] = *name;
	d[i] = '\0';

	s = malloc((strlen(owner) + 1) * sizeof(char));
	if (s == NULL)
	{
		free(d);
		free(c_dog);
		return (NULL);
	}
	for (j = 0; *owner; j++, *owner++)
		s[j] = *owner;
	s[j] = '\0';

	c_dog->name = d;
	c_dog->age = age;
	c_dog->owner = s;

	return (c_dog);
}

