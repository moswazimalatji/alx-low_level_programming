#include <string.h>
#include "main.h"

/**
 * puts2 - print character
 *
 * @str: string
 */
void puts2(char *str)
{
	int i, leng;

	leng = strlen(str);

	for (i = 0; i < leng; i += 2)
	{
		_putchar(str[i]);
	}
}
