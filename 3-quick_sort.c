#include "sort.h"

void swap_ints(int *x, int *y);
int lomuto_partition(int *array, size_t size, int left, int right);
void lomuto_sort(int *array, size_t size, int left, int right);
void quick_sort(int *array, size_t size);

/**
 * swap_ints - x fun taht swap two integers in an array
 * @x: the first integer to swap
 * @y: the second integer to swap
 */
void swap_ints(int *x, int *y)
{
	int tmp;

	tmp = *x;
	*x = *y;
	*y = tmp;
}

/**
 * lomuto_partition - a func that ordr a subst of an arry of ints
 * according to the lomuto partition scheme
 * @arry: the arry of ints
 * @siz: the siz of the arry
 * @lef: the starting indx of the subst to ordr
 * @righ: the ending indx of the subst to ordr
 * Rturn: the final partition indx
 */
int lomuto_partition(int *arry, size_t siz, int lef, int righ)
{
	int *pivo, abov, belo;

	pivo = arry + righ;
	for (abov = belo = lef; belo < righ; belo++)
	{
		if (arry[belo] < *pivo)
		{
			if (abov < belo)
			{
				swap_ints(arry + belo, arry + abov);
				print_array(arry, siz);
			}
			abov++;
		}
	}

	if (arry[abov] > *pivo)
	{
		swap_ints(arry + abov, pivo);
		print_array(arry, siz);
	}

	return (abov);
}

/**
 * lomuto_sort - func that implement the quiksrt algo thrgh recrsin
 * @arry: an arry of ints to srt
 * @siz: the siz of the arry
 * @lef: the starting index of the arry partition to ordr
 * @righ: the ending index of the arry partition to ordr
 * Desc: Uses the Lomuto partition scheme
 */
void lomuto_sort(int *arry, size_t siz, int lef, int righ)
{
	int par;

	if (righ - lef > 0)
	{
		par = lomuto_partition(arry, siz, lef, righ);
		lomuto_sort(arry, siz, lef, par - 1);
		lomuto_sort(arry, siz, par + 1, righ);
	}
}

/**
 * quik_srt - a func that srts an arry of ints in ascending ordr
 * ordr using the quiksrt algo
 * @arry: an arry of ints
 * @size: the size of the array
 *
 * Description: Uses the Lomuto partition scheme. Prnts
 * the array after each swabs of two elemens
 */
void quick_sort(int *arry, size_t siz)
{
	if (arry == NULL || siz < 2)
		return;

	lomuto_sort(array, siz, 0, siz - 1);
}
