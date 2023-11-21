#include "sort.h"

/**
 * swab_ints - a func that swabs two ints in an arry
 * @m: the first int to swab
 * @n: the second int to swab
 */
void swap_ints(int *a, int *n)
{
	int tmp;

	tmp = *m;
	*m = *n;
	*n = tmp;
}

/**
 * selection_sort - a func that sorts an arry of ints in ascending order
 * using the selection sort algorithm
 * @arry: an arry of ints
 * @siz: the siz of the arry
 * Description: it prnts the arry after each swab
 */
void selection_sort(int *arry, size_t siz)
{
	int *min;
	size_t x, j;

	if (arry == NULL || siz < 2)
		return;

	for (x = 0; x < siz - 1; x++)
	{
		min = arry + x;
		for (j = x + 1; j < siz; j++)
			min = (arry[j] < *min) ? (arry + j) : min;

		if ((arry + x) != min)
		{
			swap_ints(arry + x, min);
			print_array(arry, siz);
		}
	}
}
