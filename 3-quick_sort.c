#include "sort.h"
#include <stdio.h>
/**
 * quick_sort_recursive - recursive sorting
 * @array: array to sort
 * @low: start of sort
 * @high: end of sort
 *
 * Return: void
*/
void quick_sort_recursive(int *array, int low, int high)
{
	int pivot;

	if (low < high)
	{
		pivot = partition(array, low, high);
		quick_sort_recursive(array, low, pivot - 1);
		quick_sort_recursive(array, pivot + 1, high);
	}
}

/**
 * swap - swap two array elements
 * @x: first element
 * @y: second element
 *
 * Return: void
*/
void swap(int *x, int *y)
{
	int temp = *x;

	*x = *y;
	*y = temp;
}

/**
 * partition - used to partition array
 * @array: array to partition
 * @low: where to start
 * @high: where to end
 *
 * Return: i
*/
int partition(int *array, int low, int high)
{
	int pivot = array[high];
	int i = low - 1, j, found = 0;

	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			swap(&array[i], &array[j]);
			found = 1;
		}
	}
	swap(&array[i + 1], &array[high]);
	if (found == 1)
		print_array(array, high - low + 1);
	return (i + 1);
}

/**
 * quick_sort - uses quick sort algorithm
 * @array: array to use
 * @size: size of array
 *
 * Return: void
*/
void quick_sort(int *array, size_t size)
{
	int i, flag = 0;
	size_t size_i;

	if (array == NULL)
		return;
	for (i = 0; flag == 0 && size_i < size - 1 ; i++)
	{
		if (array[i] > array[i + 1] && size > 0)
		{
			flag = 1;
			quick_sort_recursive(array, 0, size - 1);
		}
		size_i++;
	}
	return;
}
