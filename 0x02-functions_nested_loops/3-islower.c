#include <ctype.h>

/**
 * _islower - Checks if is lowercase char
 *
 * @c: is an int
 *
 * Return: 1 if true otherwise 0
 */
int _islower(int c)
{
	if (!islower(c))
	{
		return (0);
	}
	else
		return (1);
}
