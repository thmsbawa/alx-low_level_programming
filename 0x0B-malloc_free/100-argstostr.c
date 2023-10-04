#include <stdlib.h>
#include "main.h"
/**
 * argstostr - concatenates all arguments of program.
 * @ac: argument count
 * @av: pointer to argument vectors
 * Return: pointer to new buffer with all arguments as 1 string.
 */
char *argstostr(int ac, char **av)
{
	int i, j, length, bufferlength;
	char *ptr;

	if (ac == 0)
	{
		return (NULL);
	}
	if (av == NULL)
	{
		return (NULL);
	}
	i = j = length = bufferlength = 0;
	for (i = 0; av[i]; i++)
	{
		for (j = 0; av[i][j]; j++)
			length++;
	}
	ptr = (char *)malloc(length * sizeof(char) + ac + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; av[i]; i++)
	{
		for (j = 0; av[i][j]; j++, bufferlength++)
			ptr[bufferlength] = av[i][j];
		ptr[bufferlength] = '\n';
		bufferlength++;
	}
	ptr[bufferlength] = '\0';
	return (ptr);
}

