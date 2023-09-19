#include "sort.h"

/**
 * swap - Swaps two integers in an array.
 *
 * @array: the array containing the integers
 * @first_number: index of the first integer to swap.
 * @second_number: index of the second integer to swap.
 */
void swap(int *array, int first_number, int second_number)
{
	int temp_number = 0;

	temp_number = array[first_number];
	array[first_number] = array[second_number];
	array[second_number] = temp_number;
}

/**
 * lomuto_partition - Partitions the array using Lomuto partition scheme.
 *
 * @array: the array to be sorted.
 * @low: the low index of the partition.
 * @high: the high index of the partition.
 * @size: the size of the array.
 *
 * Return: the pivot index.
 */
int lomuto_partition(int *array, int low, int high, size_t size)
{
	int pivot = 0;
	int i = 0;
	int j = 0;

	pivot =  array[high];
	i = low - 1;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (i != j)
			{
				swap(array, i, j);
				print_array(array, size);
			}
		}
	}
	if (array[i + 1] != array[high])
	{
		swap(array, i + 1, high);
		print_array(array, size);
	}
	return (i + 1);
}

/**
 * quick_sort_recursive - Recursive function to sort an array using Quick sort.
 *
 * @array: the array to be sorted.
 * @low: the low index of the partition.
 * @high: the high index of the partition.
 * @size: the size of the array.
 */
void quick_sort_recursive(int *array, int low, int high, size_t size)
{
	if (low < high)
	{
		int pivot_index = lomuto_partition(array, low, high, size);

		quick_sort_recursive(array, low, pivot_index - 1, size);
		quick_sort_recursive(array, pivot_index + 1, high, size);
	}
}

/**
 * quick_sort - Sorts an array of integers in ascending order using Quick sort.
 *
 * @array: the array to be sorted.
 * @size: number of elements in @array.
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quick_sort_recursive(array, 0, size - 1, size);
}
