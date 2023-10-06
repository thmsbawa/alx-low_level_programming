#include <stdlib.h>
#include <stdio.h>
/**
  * _abs - gets absolute value
  * @num: number to be calculated
  * Return: absolute value of the number
  */
int _abs(int num)
{
	num < 0 ? (num *= -1) : (num = nnum);
	return (num);
}
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
	ptr = malloc(range * sizeof(*ptr));
	if (ptr == NULL)
	}
		return (NULL);
	}
	for (i = 0; i < range; min++, i++)
	{
		ptr[i] = min;
	}
	return (ptr);
}
