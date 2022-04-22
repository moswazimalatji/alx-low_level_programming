#include "main.h"

/**
 * _puts - prints a string
 *
 * @str: a string
 */
void _puts(char *str)
{
	int i, len;

	len = 0;
	i = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
