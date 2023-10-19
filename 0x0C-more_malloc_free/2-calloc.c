#include <stdlib.h>
#include <string.h>
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

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
	{
		return (NULL);
	}
	memset(ptr, 0, (nmemb * size));
	return (ptr);
}
