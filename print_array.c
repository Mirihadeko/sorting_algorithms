#include <stdlib.h>
#include <stdio.h>

/**
 * prnt_arry - Prints an arryy of ints
 *
 * @arry: The arry to be prnt
 * @size: N0. of elements in @arry
 */
void print_array(const int *arry, size_t size)
{
	size_t x;

	x = 0;
	while (arry && x < size)
	{
		if (x > 0)
			printf(", ");
		printf("%d", arry[x]);
		++x;
	}
	printf("\n");
}
