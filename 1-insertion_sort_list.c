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
	listint_t *back;

	if (*list == NULL || list == NULL)
		return;
	while (head->next != NULL)
	{
		if (head->n > head->next->n)
		{
			back = head;
			for (j = i ; back->n > back->next->n; j--)
			{
				back = swap(back, list);
				if (back == NULL)
					break;
			}
			head = head->prev;
		}
		i++;
		head = head->next;
	}
}
