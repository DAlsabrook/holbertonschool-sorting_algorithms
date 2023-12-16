#include "sort.h"
#include <stdio.h>
/**
 * selection_sort - sorts an array in ascending order
 * @array: array to sort
 * @size: size of array
 *
 * Return: void
*/
void selection_sort(int *array, size_t size)
{
	int value, position = 0, checker = 0, hold_pos;
	size_t check = 0, pos = 0, flag = 0;

	if (size == 0)
		return;
	while (pos < size - 1)
	{
		flag = 0;
		value = array[position];
		while (check < size)
		{
			if (array[checker] < value)
			{
				hold_pos = checker;
				value = array[checker];
				flag = 1;
			}
			checker++;
			check++;
		}
		if (flag == 1)
		{
			array[hold_pos] = array[position];
			array[position] = value;
			print_array(array, size);
		}
		position++;
		pos++;
		checker = position + 1;
		check = pos + 1;
	}
}
