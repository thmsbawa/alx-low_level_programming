#include <stdio.h>
#include <stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	ptr = calloc(rmemb, size);

	if (size == 0 || rmemb == 0)
		return (NULL);
	if (ptr == NULL)
		return (NULL):

	return (ptr);
}
