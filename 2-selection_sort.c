#include "sort.h"

/**
 * swap - swap item using pointers
 *@xp: first item
 *@yp: second item
 *
 */
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

/**
 * selection_sort - sorts an array of integers in ascending order
 * using the Selection sort algorithm
 *
 * @array: pointer to an array
 * @size: size of the array
 *
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i, j, min_idx;

	for (i = 0; i < size - 1; i++)
	{
		min_idx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_idx])
				min_idx = j;
		}
		swap(&array[min_idx], &array[i]);
		print_array(array, size);
	}
}
