#include "sort.h"

/**
 * bubble_sort - Bubble algorithm
 * @array: stores elements of the same type
 * @size: size or length of a data structure
 * Return: Nothing
 */

void bubble_sort(int *array, size_t size)
{
	int tmp;
	size_t a, m;

	if (array == NULL || size == 0)
		return;

	for (a = 0; a < size; a++)
	{
		for (m = 0; m < size - 1; m++)
		{
			if (array[m] > array[m + 1])
			{
				tmp = array[m];
				array[m] = array[m + 1];
				array[m + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
