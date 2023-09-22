#include <ctype.h>
#include <string.h>

/**
 * string_toupper - changes lowercase chars to uppercase
 * @str: string
 *
 * Return: an uppercase char
 */

char *string_toupper(char *str)
{
	int i, n;

	n = strlen(str);
	for (i = 0; i < n; i++)
	{
		str[i] = toupper(str[i]);
	}
	return (str);
}
