#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: array
 * @n: number of an element of array
 *
 * Return: void
 *
 */


void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
