#include "sort.h"

/**
 * swap_nodes - Swap two nodes in a doubly linked list.
 *
 * @list: pointer to a pointer to the head of the linked list.
 * @first: first node to swap.
 * @second: second node to swap.
 */
void swap_nodes(listint_t **list, listint_t *first, listint_t *second)
{
	if (first == NULL || second == NULL)
		return;

	if (first->prev != NULL)
		first->prev->next = second;

	if (second->next != NULL)
		second->next->prev = first;

	first->next = second->next;
	second->prev = first->prev;
	first->prev = second;
	second->next = first;

	if (*list == first)
		*list = second;
}

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
			swap_nodes(list, first_node, middle_node);
			print_list(*list);
			first_node = middle_node->prev;
		}

		middle_node = second_node;
	}
}
