#include "sort.h"

/**
 * shell_sort - Sorts an array of ints using the shell sort algo
 * @array: An array of ints
 * @size: size of yhe array
 *
 */

void shell_sort(int *array, size_t size)
{
	int i, j, idx_1, idx_2;

	if (size < 2)
		return;
	i = 0;
	while (i <= size)
	{
		i += 1;
		idx_1 = (i * 3) + 1;
		i += 1;
		idx_2 = (i * 3) + 1;
		if (i > size)
			i = i - size;
		if (array[idx_1] > array[idx_2]) /*swap values*/
			swap_arr(array, idx_1, idx_2);
	}
	/* Begin insertion sorting */
	for (i = 0; i < (size - 1); ++i)
	{
		if (array[i] > array[i + 1])
		{
			swap_arr(array, i, i + 1);
			print_array(array, size);
			for (j = i; j > 0; --j)
				if (j < j - 1)
				{
					swap_arr(array, j, j - 1);
					print_array(array, size);
				}
		}
	}
}


/**
 * swap_arr - swaps the vales of two indexes of an array
 * @array: array of integers
 * @arr_idx1: index 1
 * @arr_idx2: index 2
 */

void swap_arr(int *array, int idx1, int idx2)
{
	int temp;

	temp = array[idx1];
	array[idx1] = array[idx2];
	array[idx2] = temp;
}
