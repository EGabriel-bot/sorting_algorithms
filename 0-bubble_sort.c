#include <stdio.h>
#include "sort.h"

/**
 * bubble_sort - bubble sort algorithm
 *@array: an array
 *@size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int i = 0, j = 0, tmp;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
