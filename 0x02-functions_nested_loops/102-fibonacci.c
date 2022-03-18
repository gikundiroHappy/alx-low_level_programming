#include <stdio.h>

/**
 * main - print the first 50 fibonacci numbers.
 * Return: 0 on success.
 */
int main(void)
{
	int n;
	unsigned long i = 0, j = 1, k;

	for (n = 0; n < 50; n++)
	{
		k = i + j;
		printf("%ld", k);
		i = j;
		j = k;
		if (n == 49)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
	}
	return (0);
}
