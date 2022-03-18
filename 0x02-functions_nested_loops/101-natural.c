#include <stdio.h>

/**
 * main - computes and computes the sum of all multiples of 3 0r 5 below 1024
 * Return: o on success.
 */
int main(void)
{
	int i, sum;

	sum = 0;
	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
