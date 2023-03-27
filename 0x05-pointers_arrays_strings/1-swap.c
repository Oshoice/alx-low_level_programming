#include <stdio.h>

/**
 * swap_int - Swap the values of two intergers.
 * @a : The first interger to be swapped
 * @b : The second interger to be swapped
 *
 * Return : nothing
 */

void swap_int(int *a, int *b)
/* the function that swaps the values of two integers. */
{
int tmp = *a;
*a = *b;
*b = tmp;
}
