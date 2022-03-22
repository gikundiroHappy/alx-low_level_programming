#include "main.h"

/**
 * print_rev - print reverse of string
 * @s: validate the character
 * Return; void
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	for (; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n')
}
