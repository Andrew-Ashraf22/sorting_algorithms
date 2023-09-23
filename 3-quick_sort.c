#include "sort.h"

/**
 * quick_sort - Sorts an array
 * @array: the array
 * @size: Size of array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL)
		return;
	if (size < 2)
		return;
	quicksort(array, 0, size - 1, size);
}

/**
 * quicksort - apply the quicksort algo
 * @array: the array
 * @low: Starting ind
 * @high: Ending ind
 * @size: Size of array
 */
void quicksort(int *array, int low, int high, size_t size)
{
	int piv;

	if (low < high)
	{
		piv = partition(array, low, high, size);
		quicksort(array, low, piv - 1, size);
		quicksort(array, piv + 1, high, size);
	}
}

/**
 * partition - Partitions the array
 * @array: the array
 * @low: Starting ind
 * @high: Ending ind
 * @size: the size
 * Return: Index of the pivot element
 */
int partition(int *array, int low, int high, size_t size)
{
	int piv = array[high];
	int i = low - 1, j;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] <= piv)
		{
			i++;
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}

	if (i + 1 != high)
	{
		swap(&array[i + 1], &array[high]);
		print_array(array, size);
	}

	return (i + 1);
}

/**
 * swap - swap 2 items
 * @a: first integer
 * @b: second integer
 */
void swap(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
