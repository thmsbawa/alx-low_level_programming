#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string
 * @str: is a string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i, n;

	n = strlen(str);
	for (i = ((n + 1) / 2); i < n; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
