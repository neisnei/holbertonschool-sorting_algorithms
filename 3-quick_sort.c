#include "sort.h"

/**
 * _swap - swap two numbers.
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
 * _split - Split the array, takes last
 * @arr: Array
 * @min: first element
 * @last: The last element
 * @size: size
 * Return: integer
 **/
int _split(int *arr, int min, int last, size_t size)
{
	int piv;
	int r = (min);
	int x;

	piv = arr[last];
	for (x = min; x < last; x++)
	{
		if (arr[x] <= piv)
		{

			_swap(&arr[r], &arr[x]);


			if (r != x)
				print_array(arr, size);

			r++;

		}
	}

	_swap(&arr[r], &arr[last]);
	if (r != x)
		print_array(arr, size);

	return (r);
}

/**
 * quick_sort_array - sort ariray
 * @arr: arr
 * @min: min
 * @last: last
 * @size: size
 * Return: Nothing
 */
void quick_sort_array(int *arr, int min, int last, size_t size)
{

	int piv;

	if (min < last)
	{
		piv = _split(arr, min, last, size);
		quick_sort_array(arr, min, (piv - 1), size);
		quick_sort_array(arr, (piv + 1), last, size);
	}
}

/**
 * quick_sort -Sort an array using sort algorithm
 * @array: array
 * @size: size
 **/
void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;

	quick_sort_array(array, 0, size - 1, size);
}

