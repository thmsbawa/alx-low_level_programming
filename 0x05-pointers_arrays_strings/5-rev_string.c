#include "main.h"
#include <string.h>

/**
 * rev_string - reverse a string
 * @s: is a string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i, j, n;

	n = strlen(s);

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		char temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
