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
	size_t i, j;

	if (array == NULL || size == 0)
		return;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
