#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - A function that returns a pointer to a
 * 2 dimensional array of integers
 * @width: An input integer at number of columns
 * @height: An input integer at number of rows
 * Return: pointer to a 2D array, NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **result, idx_w, idx_h;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	result = (int **)malloc(sizeof(int *) * height);
	if (result == NULL)
	{
		return (NULL);
	}
	idx_h = 0;
	while (idx_h < height)
	{
		result[idx_h] = (int *)malloc(sizeof(int) * width);
		if (result[idx_h] == NULL)
		{
			while (idx_h--)
			{
				free(result[idx_h]);
			}
			free(result);
			return (NULL);
		}
		idx_h = idx_h + 1;
	}
	idx_h = 0;
	idx_w = 0;
	while (idx_h < height)
	{
		while (idx_w < width)
		{
			result[idx_h][idx_w] = 0;
			idx_w = idx_w + 1;
		}
		idx_h = idx_h + 1;
	}
	return (result);
}
