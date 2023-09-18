#include "sort.h"

/*
 * bubble_sort - compare pairs of adjacent elements and swap if in wrong order
 * @array: stores elements of the same type
 * @size: size or length of a data structure
 * Return: Always 0
 */

void bubble_sort(int *array, size_t size)
{
	int tmp;
	size_t i, m;

	if (array == NULL || size == 0)
		return;

	for (i = 0; i < size; i++)
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
