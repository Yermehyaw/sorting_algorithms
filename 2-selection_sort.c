#incude "sort.h"

/**
 * selection_sort - Sorts an array of intefers using selection sort algo.
 * @array: array of integers
 * @size: size of the array
 *
 */

void selection_sort(int *array, size_t size)
{
	int smallest;
	size_t i, j, k;

	if (size < 2 || array == NULL)
		return;
	smallest = array[0]; /* Any arbitrary starting value */
	j = k = 0;
	for (i = 0; i < size; ++i)
	{
		while (j < size) /*iterate till a smaller value is found */
		{
			if (array[k] < smallest)
				smallest = array[k];
			++j;
		}
		array[i] = smallest; /* Set the smallest val to 0th index*/
		smallest = array[i + 1]; /*Use a diff arbitrary value*/
		k += 1; /**
			 * Next iteration shouldnt start from previous starting
			 * index i.e once a smaller value is found and placed at
			 * the beginning of the array, that vaue shouldnt be
			 * compared for smallest with remaing values of the
			 * array
			 */

	}
}
