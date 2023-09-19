#include "main.h"
#include <string.h>

/**
 * _strcpy - copies a string
 * @dest: copy destinatio
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);

	return (dest);
}
