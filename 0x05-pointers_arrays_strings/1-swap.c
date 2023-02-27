#include "stdio.h"

/**
 * swap_int - swap variale values
 * @a: pointer_a
 * @b:pointerb_b
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
