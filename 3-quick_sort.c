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
 * Return:
*/
int partition(int *array, int low, int high)
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
	quick_sort_recursive(array, 0, size - 1);
}
