#include "sort.h"

/*
 * bubble_sort - compare pairs of adjacent elements and swap if in wrong order
 * @array: stores elements of the same type
 * @size_t: represent memory sizes or array indices
 * @size: size or length of a data structure
 * Return: Always 0
 */

void bubble_sort(int *array, size_t size)
{
	int tmp;
	size_t a, k;

	if (array == NULL || size == 0)
		return;

	for (a = 0; a < size; a++)
	{
		for (k = 0; k < size - 1; k++)
		{
			if (array[k] > array[k + 1])
			{
				tmp = array[k];
				array[k] = array[k + 1];
				array[k + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
