#include <stdio.h>
#include "sort.h"
void bubble_sort(int *array, size_t size)
{
    unsigned int i = 0, j = 0, tmp;
    for (i = 0; i < size; i++) 
    {   /*loop n times - 1 per element*/
        for (j = 0; j < size - i - 1; j++) 
        { /*last i elements are sorted already*/
            if (array[j] > array[j + 1]) 
            {  /* swap if order is broken*/
                tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
                print_array(array,size);
            }
        }
    }
}