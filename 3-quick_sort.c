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
void quick_sort_recursive(int *full_array, int *array, int low, int high, size_t size)
{
	int pivot, flag = 0;

	if (low < high)
	{
		pivot = partition(full_array, array, low, high, size);
		quick_sort_recursive(full_array, array, low, pivot - 1, size);
		quick_sort_recursive(full_array, array, pivot + 1, high, size);
	}
	printf("\nIn recursive out of if #%d:\n", flag++);
	print_array(full_array, size);
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
int partition(int *full_array, int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low, j;

	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			swap(&array[i], &array[j]);
			i++;
		}
	}
	swap(&array[i], &array[high]);

	return (i);
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
	quick_sort_recursive(array, array, 0, size - 1, size);
}
