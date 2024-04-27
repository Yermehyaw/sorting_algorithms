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
			}
			print_array(array, size);
			++i;
		}
	}
}
