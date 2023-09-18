#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order
 *               using the Bubble sort algorithm.
 *
 * @array: the array to be printed.
 * @size: number of elements in @array.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0;
	size_t j = 0;

	size_t swap_value = 0;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
		for (j = 0; j < size - 1; j++)
			if (array[j] > array[j + 1])
			{
				swap_value = array[j + 1];
				array[j + 1] = array[j];
				array[j] = swap_value;

				print_array(array, size);
			}
}
