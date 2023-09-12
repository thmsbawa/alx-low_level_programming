#include <ctype.h>

/**
 * _islower - Checks is for lowercase char
 *
 * Return: 1 if true
 * Return: 0 otherwise
 */
int _islower(int c)
{
	if (!islower(c))
	{
		return 0;
	}
	else
		return 1;
}
