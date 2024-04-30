#include "sort.h"

/**
 * selection_sort - Sorts an array of intefers using selection sort algo.
 * @array: array of integers
 * @size: size of the array
 *
 */

void selection_sort(int *array, size_t size)
{
	size_t smallest; /*index of the smallest elem of the array*/
	size_t i, j, temp;

	if (size < 2 || array == NULL)
		return;
	for (i = 0; i < (size - 1); ++i)
	{
		smallest = i; /* An arbitrary starting value */
		/*iterate till a smaller value is found */
		for (j = i + 1; j < size; ++j)
		{
			if (array[j] < array[smallest])
				smallest = j;
		}
		if (smallest != i)/*if a smaller value is found */
		{
			/*swap the ith index for the smaller element*/
			temp = array[i];
			array[i] = array[smallest];
			array[smallest] = temp;
			print_array(array, size);
		}
	}
}
