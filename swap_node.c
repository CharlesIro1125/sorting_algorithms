#include "sort.h"
/**
 * swap - swap two double link list
 * @head: double link list
 * @list: double main head pointer
 * Return: double list pointer
 */
listint_t *swap(listint_t *head, listint_t **list)
{
	listint_t *tmp, *node1, *node2;
	listint_t *back = head;

	tmp = back->prev;
	node1 = back;
	node2 = back->next;
	node1->next = node2->next;
	node2->next = back;
	if (tmp != NULL)
		tmp->next = node2;
	else if (tmp == NULL)
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
	return (back);
}

