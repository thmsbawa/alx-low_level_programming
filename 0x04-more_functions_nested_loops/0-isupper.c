#include "main.h"
#include <ctype.h>

/**
 * _isupper - checks if character is is uppercase
 * @c: is checked to see if its uppercase
 * Return: 1 if c is uppercase and 0 if otherwise
 */
int _isupper(int c)
{
	if (!isupper(c))
	{
		return (0);
	}
	else
		return (1);
}
