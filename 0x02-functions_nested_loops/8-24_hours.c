#include "main.h"

/**
 * jack_bauer - print time table in this format HH:MM
 * Return: the sum of two numbers
 */
void jack_bauer(void)
{
	int i, j, a, b, c, d;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			a = i / 10;
			b = i % 10;
			c = j / 10;
			d = j % 10;
			_putchar(a + '0');
			_putchar(b + '0');
			_putchar(':');
			_putchar(c + '0');
			_putchat(d + '0');
			_putchar('\n');
		}
	}
}
