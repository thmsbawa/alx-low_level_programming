#include "ctype.h"

/**
 * _isalpha - checks is a character is aphabetic
 * @c: is an int argument for _isalpha
 * Return: 1 if true otherwise 0
 */
int _isalpha(int c)
{
	if (!isalpha(c))
	{
		return (0);
	}
	else
		return (1);
}
