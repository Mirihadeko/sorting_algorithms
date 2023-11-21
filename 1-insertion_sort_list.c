#include "sort.h"

/**
 * swab_nods - a func that swabs two nods in a lisints_t dobly-linked lis
 * @h: a  pointr to the head of the dobly-linked lis
 * @n1: Aa pointr to the first nod to swab
 * @n2: a second node to swab
 */
void swap_nodes(listint_t **b, listint_t **n0, listint_t *n1)
{
	(*n0)->next = n1->next;
	if (n1->next != NULL)
		n1->next->prev = *n0;
	n1->prev = (*n0)->prev;
	n1->next = *n0;
	if ((*n0)->prev != NULL)
		(*n0)->prev->next = n1;
	else
		*h = n1;
	(*n0)->prev = n1;
	*n0 = n1->prev;
}

/**
 * insertion_srt_lis - a func that sorts a dubly linked lis of ints
 * using the insertion sort algo
 * @lis: a pointer to the head of a dubly-linked lis of ints
 * Description: it prnts the lis after each swap
 */
void insertion_sort_list(listint_t **lis)
{
	listint_t *iter, *insert, *tmp;

	if (lis == NULL || *lis == NULL || (*lis)->next == NULL)
		return;

	for (iter = (*lis)->next; iter != NULL; iter = tmp)
	{
		tmp = iter->next;
		insert = iter->prev;
		while (insert != NULL && iter->n < insert->n)
		{
			swap_nodes(lis, &insert, iter);
			print_list((const listint_t *)*lis);
		}
	}
}
