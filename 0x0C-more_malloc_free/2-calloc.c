#include <stdlib.h>
#include <string.h>
#include <stddef.h>
/**
  * _calloc - allocates memory for an array
  * @nmemb: array of elements
  * @size: size of nmemb elements
  * Return: return pointer to allocated memory
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;
	unsigned int i;
	size_t tsize;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	tsize = (size * nmemb);
	ptr = malloc(tsize);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb; i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
