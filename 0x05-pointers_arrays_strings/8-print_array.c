#include <stdio.h>
#include "main.h"

/**
 * print_array - print n elements
 *
 * @a: n elements
 *
 * @n: number
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
			printf("%d", *(a + i));
			printf(",");
			printf(" ");
		} else
		{
			printf("%d", *(a + i));
			printf("\n");
		}
	}
}
