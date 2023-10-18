#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - copies a string into a new buffer
 * @str: string to be copied
 * Return: pointer to a new buffer
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}
		if (i < 0)
		{
			return (NULL);
		}
	ptr = malloc((i + 1) * sizeof(char));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (j = 0; j <= i; j++)
	{
		ptr[j] = str[j];
	}
	ptr[j] = '\0';
	return (ptr);
}
