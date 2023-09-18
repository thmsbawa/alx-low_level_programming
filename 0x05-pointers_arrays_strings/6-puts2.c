#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other char of a string
 * @str: is a string
 *
 * Return: void
 */

void puts2(char *str)
{
	int n, i;

	n = strlen(str);
	for (i = 0; i < n; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
