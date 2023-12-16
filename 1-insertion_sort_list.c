#include "sort.h"
#include <stdio.h>
/**
 * insertion_sort_list - sorts a doubly linked list
 * @list: list to sort
 *
 * Return: void
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *tmp = *list, *unsorted = *list;
	int flag = 0;

	if (list == NULL)
		return;
	while (unsorted != NULL)
	{
		flag = 0;
		if (unsorted->prev != NULL && unsorted->n < tmp->n)
		{
			if (tmp->prev != NULL)
				tmp->prev->next = unsorted;
			if (unsorted->next != NULL)
				unsorted->next->prev = tmp;
			unsorted->prev = tmp->prev;
			tmp->next = unsorted->next;
			unsorted->next = tmp;
			tmp->prev = unsorted;
			if ((*list)->prev != NULL)
				*list = unsorted;
			if (unsorted->prev != NULL && unsorted->n < unsorted->prev->n)
			{
				tmp = unsorted->prev;
				print_list(*list);
				continue;
			}
			tmp = unsorted;
			unsorted = unsorted->next;
			flag = 1;
			print_list(*list);
		}
		if (flag == 0)
		{
			tmp = unsorted;
			unsorted = unsorted->next;
		}
	}
}
