#include "sort.h"
/**
 * bubble_sort - does a bit of sorting
 * @array: the array to use
 * @size: size of the array
 * 
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t array_element = 0;
	int element = 0, tmp, flag = 1;
	/*Check if array is big enough*/
	if (size < 2)
		return;
	/*Run only if a change was made in previous iteration*/
	while (flag == 1)
	{
		flag = 0;
		element = 0;
		array_element = 0;
		/*Run through the whole array*/
		while (array_element < size - 1)
		{
			/*Compare 2 elements and switch if not in order*/
			if (array[element] > array[element + 1])
			{
				flag = 1;
				tmp = array[element + 1];
				array[element + 1] = array[element];
				array[element] = tmp;
				print_array(array, size);
			}
			element++;
			array_element++;
		}
	}
}
