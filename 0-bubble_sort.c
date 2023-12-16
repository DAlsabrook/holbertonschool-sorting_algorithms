#include "sort.h"
void bubble_sort(int *array, size_t size)
{
	size_t array_element = 0;
	int element = 0, tmp, flag = 1;

	if (size < 2)
		return;
	while (flag == 1)
	{
		flag = 0;
		element = 0;
		array_element = 0;
		while (array_element < size - 1)
		{
			if (array[element] > array[element + 1])
			{
				flag = 1;
				tmp = array[element + 1];
				array [element + 1] = array[element];
				array[element] = tmp;
			}
			element++;
			array_element++;
		}
		print_array(array, size);
	}
}
