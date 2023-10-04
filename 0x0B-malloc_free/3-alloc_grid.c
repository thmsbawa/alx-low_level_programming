#include <stdlib.h>
/**
 * alloc_grid - creates a 2-D integer grid
 * @width: width of grid
 * @height: height of grid
 * Return: pointer to 2-D integer grid
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr;

	i = j = 0;
	if (height < 1)
	{
		return (NULL);
	}
	ptr = (int **)malloc(height * sizeof(ptr));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(width * sizeof(int));
		if (ptr[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(ptr[j]);
			}
			free(ptr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
