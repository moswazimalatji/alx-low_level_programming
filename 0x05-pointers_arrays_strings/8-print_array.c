#include <string.h>
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
	int i, len;

	len = strlen(str);

	for (i = 0; i < n; i++)
	{
		if ( i != n - 1)
		{
			_putchar(a[i]);
			_putchar(',');
		} else
		{
			_putchar(a[i]);
			_putchar('\n');
		}
	}
}
