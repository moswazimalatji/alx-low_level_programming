#include "main.h"

/**
 * swap_int - swaps the values of two int
 *
 * @a: first int
 *
 * @b: secound int
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
