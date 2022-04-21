#include "main.h"
#include <string.h>

/**
 * puts_half - prints half
 *
 * @str: string
 */
void puts_half(char *str)
{
	int i, len;

	len = strlen(str);

	for (i = len / 2; i < len; i++)
	{
		if (len % 2 != 0)
		{

