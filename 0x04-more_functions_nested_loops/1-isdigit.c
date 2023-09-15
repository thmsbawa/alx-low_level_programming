#include "main.h"
#include <ctype.h>

/**
 * _isdigit - checks if character is is a digit
 * @c: is checked to see if its a digit
 * Return: 1 if c is a digit and 0 if otherwise
 */
int _isdigit(int c)
{
	if (!isdigit(c))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
