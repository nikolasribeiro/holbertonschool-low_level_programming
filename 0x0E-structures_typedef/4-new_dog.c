#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
* get_length - function to count string length
* @str: takes in string
* Return: returns string length
*/
int get_length(char *str)
{
	int l;

	for (l = 0; str[l] != '\0'; l++)
	{
		continue;
	}

	return (l);
}

/**
 * copy - copies the string pointed to by src, to dest
 * @src: Source of the string to copy
 * @dest: destintation
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *copy(char *dest, char *src)
{
	int i;
	int count = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
		count++;
	}
	dest[count] = src[count];
	return (dest);
}
/**
* new_dog - function that creates a new dog
* @name: dog's name
* @age: dog's age
* @owner: dog's owner
* Return: a copy of name and owner of new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *new_name, *new_owner;


	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		return (NULL);
	}

	new_name = malloc(sizeof(char) * get_length(name) + 1);

	if (new_name == NULL)
	{
		free(dog);
		return (NULL);
	}

	copy(new_name, name);

	new_owner = malloc(sizeof(char) * get_length(owner) + 1);

	if (new_owner == NULL)
	{
		free(new_name);
		free(dog);
		return (NULL);
	}

	copy(new_owner, owner);
	dog->name = new_name;
	dog->age = age;
	dog->owner = new_owner;
	return (dog);
}
