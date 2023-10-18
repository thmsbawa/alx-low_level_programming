#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = (char*)malloc(sizeof(char) * size);

	if (size == 0)
		return (NULL);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < size ; i++)
		str[i] = c;
	
	return (str);
}

char *_strdup(char *str)
{
	char *arr;
	size_t len;
	if (str == NULL)
		return NULL;
	len = strlen(str)
	arr = (char *)malloc(sizeof(char) * len);
	if (arr == NULL)
		return (NULL);
	strcpy(arr, s);
	return (arr);
}
