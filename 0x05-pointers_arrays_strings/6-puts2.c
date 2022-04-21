#include <string.h>
#include "main.h"

/**
 * puts2 - print character
 *
 * @str: string
 */
void puts2(char *str)
{
	int i, len;
	
	len = strlen(str);
	
	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
}
