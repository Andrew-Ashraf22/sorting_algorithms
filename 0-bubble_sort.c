#include "sort.h"
/**
 * bubble_sort - the bubble sort algo
 * @array: the array
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t j = 0, i = 0;
	int temp, breaker;

	if (array == NULL)
		return;

	if (size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		breaker = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				breaker = 1;
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
		if (breaker == 0)
			return;
	}
}
