#include "sort.h"

/**
 * swab_ints - Swab two integers in an array.
 * @a: The first integer to swab.
 * @b: The second integer to swab.
 */
void swap_ints(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

/**
 * bble_sort - Sort an arry of ints in ascending order.
 * @arry: An arry of ints to sort.
 * @size: The size of the arry.
 *
 * Description: Prnts the arry after each swab.
 */
void bubble_sort(int *arry, size_t size)
{
	size_t z, len = size;
	bool bbly = false;

	if (arry == NULL || size < 2)
		return;

	while (bbly == false)
	{
		bbly = true;
		for (z = 0; z < len - 1; z++)
		{
			if (arry[z] > arry[z + 1])
			{
				swap_ints(arry + z, arry + z + 1);
				print_array(arry, size);
				bbly = false;
			}
		}
		len--;
	}
}
