#include "sort.h"

/**
 * quick_sort - sorts an array of integers using the quick sort algorithm.
 * @array: array of integers
 * @size: size of the array
 *
 */

void quick_sort(int *array, size_t size)
{
	quick_sorter(array, 0, size);/*index to start is 0 and end is size - 1*/
}


/**
 * quick_sorter - Handles the recursive call for the quick sort algorithm
 * @array: array of integers
 * @start: beginning of partition
 * @end: end of partition
 *
 */

void quick_sorter(int *array, int start, int end)
{
	int idx;

	if (start < end)
	{
		/* Using lomuto partioning scheme */
		idx = lomuto_partition(array, start, end);
		if (idx < 1) /*array is already sorted */
			return;
		quick_sorter(array, start, idx - 1);
		quick_sorter(array, idx + 1, end);
	}
}


/**
 * lomuto_partition - Uses the lomuto partioning scheme to divide/partition an
 * array
 * @array: the array
 * @start: beginning index of the array/sub-array to partition
 * @end: ending index of the array/sub-array to partition
 *
 * Return: index where the array is partitioned (int)
 */

int lomuto_partition(int *array, int start, int end)
{
	int pivot_val, i, j, temp;

	pivot_val = array[end];
	/*j and i are the two partioning pointers*/
	i = start;
	for (j = start; j <= end - 1; ++j)
	{
		if (array[j] >= pivot_val)/*if any valie is greater than pivot*/
		{
			i = j;/*move the pointers to he  same index*/
			while (i <= end - 1)/**
					*iterate till a value smaller than the
					*value which is larger than the pivot
					*is found
					*/
			{
				if (array[i] < array[j])
				{
					/*swap the values*/
					temp = array[j];
					array[j] = array[i];
					array[i] = temp;
					print_array(array, end);
					break;
				}
				++i;
			}
		}
	}
	return (i); /*index where array os finally partitioned/divided */
}
