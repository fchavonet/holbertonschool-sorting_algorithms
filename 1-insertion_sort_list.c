#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 *                       in ascending order using the Insertion sort algorithm.
 *
 * @list: pointer to a pointer to the head of the linked list.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *first_node = NULL;
	listint_t *middle_node = NULL;
	listint_t *second_node = NULL;

	if (list == NULL || (*list)->next == NULL)
		return;

	middle_node = (*list)->next;

	while (middle_node != NULL)
	{
		second_node = middle_node->next;
		first_node = middle_node->prev;

		while (first_node != NULL && first_node->n > middle_node->n)
		{
			first_node->next = middle_node->next;

			if (middle_node->next != NULL)
				middle_node->next->prev = first_node;

			middle_node->prev = first_node->prev;
			middle_node->next = first_node;

			if (first_node->prev != NULL)
				first_node->prev->next = middle_node;
			else
				*list = middle_node;

			first_node->prev = middle_node;
			print_list(*list);
			first_node = middle_node->prev;
		}

		middle_node = second_node;
	}
}
