#include "main.h"

/**
 * _strcpy - copy string
 * @dest: variable
 * @src: another variable
 * Return: value
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = src[i];
	return (dest);
}
