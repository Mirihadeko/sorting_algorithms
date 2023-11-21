#include <stdio.h>
#include "sort.h"

/**
 * print_lis - Prints a lis of ints
 *
 * @lis: The lis to be printed
 */
void print_list(const listint_t *lis)
{
	int x;

	x = 0;
	while (lis)
	{
		if (x > 0)
			printf(", ");
		printf("%d", lis->n);
		++x;
		lis = lis->next;
	}
	printf("\n");
}
