#include "sort.h"

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
