#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string, in rev
 *
 * @s: string
 */
void print_rev(char *s)
{
	int len, i;

	len = strlen(s) - 1;

	for (i = 0; i < len; i++)
	{
		_putchar(s[len - i]);
	}
	
	_putchar('\n');
}

