#include "main.h"

/**
 * print_rev - prints a string, in rev
 *
 * @s: string
 */
void print_rev(char *s)
{
	int len, i;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0; i <= len; i++)
	{
		_putchar(s[len - i]);
	}
	_putchar('\n');
}

