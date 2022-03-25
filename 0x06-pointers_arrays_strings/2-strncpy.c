#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: destination value
 * @src: source value
 * @n: copy limit
 * Retun: value
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (src[j])
	{
		j++;
	}
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
