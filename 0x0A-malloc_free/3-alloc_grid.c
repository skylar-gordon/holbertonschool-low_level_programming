#include "holberton.h"
#include "strlen.c"
#include <stdlib.h>
/**
* alloc_grid - allocate a 2D array.
* @width: The first dimension of the 2D array.
* @height: The second dimension of the 2D array.
* Return: Pointer to array upon success, NULL upon failure
*/
int **alloc_grid(int width, int height)
{
	int size = sizeof(int) * width * height;
	int **grid = (int **)malloc(size);
	int i;
	int j;

	if (size == 0 || grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			*grid[i * j] = 0;
			j++;
		}
		i++;
	}
	return (grid);
}
