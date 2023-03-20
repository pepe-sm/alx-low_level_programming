#include"dog.h"
#include<stdlib.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *scr);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - finds length of string
 * @str: string to measure
 *
 * Return: Length of str
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * _strcopy - copies a string to a buffer including null byte
 * @dest: Buffer storing the string copy
 * @scr: source string
 *
 * Return: the pointer to dest
 */

char *_strcopy(char *dest, char *scr)
{
	int index = 0;

	for (index = 0; scr[index]; index++)
		dest[index] = scr[index];

	dest[index] = '\0';

	return (dest);
}

/**
 * new_dog - creates new dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: new struct dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogz;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	dogz = malloc(sizeof(dog_t));
	if (dogz == NULL)
		return (NULL);

	dogz->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dogz->name == NULL)
	{
		free(dogz);
		return (NULL);
	}

	dogz->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dogz->owner == NULL)
	{
		free(dogz->name);
		free(dogz);
		return (NULL);
	}

	dogz->name = _strcopy(dogz->name, name);
	dogz->age = age;
	dogz->owner = _strcopy(dogz->owner, owner);

	return (dogz);
}
