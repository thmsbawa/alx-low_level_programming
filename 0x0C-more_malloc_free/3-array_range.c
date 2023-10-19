#include <stdlib.h>
#include <stdio.h>

/**
  * array_range - creates an array of integers
  * @min: minimum value
  * @max: maximum value
  * Return: pointer to newly ctreated array
  */
int *array_range(int min, int max)
{
	int *ptr;
	int range, i;

	if (min > max)
	{
		return (NULL);
	}
	range = max - min + 1;
	ptr = malloc(range * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		ptr[i - min] = i;
	}
	return (ptr);
}
