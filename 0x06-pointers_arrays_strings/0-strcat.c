#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings together
 * @dest: destination
 * @src: source
 *
 * Return: a pointer to destination
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
