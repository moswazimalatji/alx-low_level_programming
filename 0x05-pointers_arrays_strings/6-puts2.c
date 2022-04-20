#include <string.h>
#include "main.h"

/**
 * puts2 - print character
 *
 * @str: string
 */
void puts2(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
}
