#include "sort.h"

/**
 * _swap - swap two numbers
 * @a: integer
 * @b: integer
 **/
void _swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * selection_sort - array using selection algorithm
 * @array: array
 * @size: array size
 **/

void selection_sort(int *array, size_t size)
{
	unsigned int k, b, min;

	if (array == NULL || size < 2)
		return;

	for (k = 0; k < size; k++)
	{
		min = k;
		for (b = k + 1; b < size; b++)
		{
			if (array[min] > array[b])
				min = b;
		}
		if (min != k)
		{
			_swap(&array[k], &array[min]);
			print_array(array, size);
		}
	}
}

