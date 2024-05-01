#include "sort.h"

/**
 * quick_sort - sorts an array of integers using the quick sort algorithm.
 * @array: array of integers
 * @size: size of the array
 *
 */

void quick_sort(int *array, size_t size)
{
	quick_sorter(array, 0, size - 1, size);/*start is 0 & end is size - 1*/
}


/**
 * quick_sorter - Handles the recursive call for the quick sort algorithm
 * @array: array of integers
 * @start: beginning of partition
 * @end: end of partition
 * @size: size of the array
 *
 */

void quick_sorter(int *array, int start, int end, int size)
{
	int idx;

	if (start < end)
	{
		/* Using lomuto partioning scheme */
		idx = lomuto_partition(array, start, end, size);
		quick_sorter(array, start, idx - 1, size);
		quick_sorter(array, idx + 1, end, size);
	}
}


/**
 * lomuto_partition - Uses the lomuto partioning scheme to divide/partition an
 * array
 * @array: the array
 * @start: beginning index of the array/sub-array to partition
 * @end: ending index of the array/sub-array to partition
 * @size: size of the array
 *
 * Return: index where the array is partitioned (int)
 */

int lomuto_partition(int *array, int start, int end, int size)
{
	int pivot_val, i, j, temp;

	pivot_val = array[end];
	/*j and i are the two partioning pointers*/
	i = start; /* partition index */
	for (j = start; j <= end - 1; ++j)
	{
		if (array[j] <= pivot_val)/*if any value is less than pivot*/
		{
			/*move to ith position*/
			temp = array[j];
			array[j] = array[i];
			array[i] = temp;
/*			print_array(array, end + 1);*/
			++i;
		}
	}
	/*swap value at partition idx i with val at end i.e pivot_val*/
	temp = array[i];
	array[i] = array[end];
	array[end] = temp;
	print_array(array, size);
	return (i); /*i is at the partitioning index*/
}
