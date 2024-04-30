#include "sort.h"

/**
 * bubble_sort - sorts an array of ints with the bubble sort algo.
 * @array: an arra5y of ints
 * @sixe: size of the array
 *
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, swap;

	if (size < 2 || array == NULL)
		return;
	while (proof_read_array(array, size))
	{
		i = 0;
		while (i < (size - 1)) /*size - 1 to avoid passing index limit*/
		{
			if (array[i] >  array[i + 1])
			{
				swap = array[i]; /* Larger value */
				array[i] = array[i + 1];
				array[i + 1] = swap;
				print_array(array, size);
			}
			++i;
		}
	}
}


/**
 * proof_read_array - proof reads if an array is sorted in ascending order
 * @array: array to be proof read
 * @size: size of the array
 *
 * Returns: int equivalent of a bool (0 or 1)
 */

int proof_read_array(int *array, int size)
{
	int i;

	for (i = 0; i < (size - 1); ++i)
	{
		if (array[i] > array[i + 1])
			return (1); /* return true, array is NOT sorted*/
	}
	return (0); /* return false, array is sorted*/
}
