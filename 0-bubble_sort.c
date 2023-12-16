#include "sort.h"
void bubble_sort(int *array, size_t size)
{
	size_t array_element = 0;
	int element = 0, tmp;

	if (size < 2)
		return;
	while (array_element < size)
	{
		if (array[element] > array[element + 1])
		{
			tmp = array[element + 1];
			array [element + 1] = array[element];
			array[element] = tmp;
		}
		element++;
		array_element++;
	}
}
