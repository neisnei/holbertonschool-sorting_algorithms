#include "sort.h"

/*
 * bubble_sort - compare pairs of adjacent elements and swap if in wrong order
 * @array: stores elements of the same type
 * @size_t: represent memory sizes or array indices
 * @size: size or length of a data structure
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	unsigned int o, a;

	if (!array)
		return;

	for (o = 0; o < size - 1; o++)
	{
		for (a = 0; a < size - o - 1; a++)
		{
			if (array[a] > array[a + 1])
			{
				swap(&array[a], &array[a + 1]);
				print_array(array, size);
			}
		}
	}
}
