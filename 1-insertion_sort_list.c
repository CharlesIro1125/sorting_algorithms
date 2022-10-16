#include "sort.h"
/**
 * insertion_sort_list - takes a struct and applies
 * insertion sort algorithm
 * @list: a pointer to a pointer
 * Return: return void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *head = *list;
	int i = 0, j;
	listint_t *tmp, *node1, *node2, *back;

	if (*list == NULL || list == NULL || list->next == NULL) 
		return;
	while (head->next != NULL)
	{
		if (head->n > head->next->n)
		{
			back = head;
			for (j = i ; back->n > back->next->n; j--)
			{
				tmp = back->prev;
				node1 = back;
				node2 = back->next;
				node1->next = node2->next;
				node2->next = back;
				if (tmp != NULL)
					tmp->next = node2;
				else
				{	
					back = node2;
					*list = back;
				}
				if (node1->next != NULL)
					node1->next->prev = node1;
				if (node2->next != NULL)
					node2->next->prev = node2;
				node2->prev = tmp;
				print_list(*list);
				if (tmp != NULL)
					back = tmp;
				if (tmp == NULL)
					break;
			}
			head = head->prev;
		}
		i++;
		head = head->next;
	}
}
