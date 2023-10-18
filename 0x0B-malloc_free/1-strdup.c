#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stddef.h>
/**
 * _strdup - copies a string into a new buffer
 * @str: string to be copied
 * Return: pointer to a new buffer
 */
char *_strdup(char *str)
{
	char *ptr;
	size_t len;

	if (str == NULL)
		return (NULL);
	len = strlen(str);
	ptr = (char *)malloc(len + 1 * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	strcpy(ptr, str);
	return (ptr);
}
