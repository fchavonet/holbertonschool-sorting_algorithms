#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending order
 *                  using the Selection sort algorithm.
 *
 * @array: the array to be printed.
 * @size: number of elements in @array.
 */
void selection_sort(int *array, size_t size)
{
	size_t i = 0;
	size_t j = 0;

	size_t swap_value = 0;
	size_t small_number = 0;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		small_number = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[small_number])
				small_number = j;
		}
		if (small_number != i)
		{
			swap_value = array[i];
			array[i] = array[small_number];
			array[small_number] = swap_value;

			print_array(array, size);
		}
	}
}
