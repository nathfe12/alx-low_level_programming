#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2d array of integers
 * @width: width of array
 * @height: height of array
 *
 * Return: a pointer to a 2d array of integers
 */
int **alloc_grid(int width, int height)
{
	int **array, i, j;
	int len = width * height;

	if (len <= 0)
		return (NULL);

	array = (int **)
