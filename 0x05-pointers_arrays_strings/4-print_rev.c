#include "main.h"
#include <string.h>

/**
 * print_rev - prints astring in reverse
 * @s:is a string
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i, n;

	n = strlen(s);
	for (i = (n - 1); i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
