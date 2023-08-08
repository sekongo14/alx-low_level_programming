#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - entry point
 * @width: variable1
 * @height: variable2
 * Return: grid
 */
int **alloc_grid(int width, int height)
{
	int i;
	int **grid;
	int j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof()int);
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid);
				return (NULL);
			}
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);

}
