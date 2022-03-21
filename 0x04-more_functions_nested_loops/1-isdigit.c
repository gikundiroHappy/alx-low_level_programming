#include "main.h"

/**
 * _isdigit - checks for characters that are digits
 * @c: character to be checked
 * return: 1 if it i a digit, otherwise 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
