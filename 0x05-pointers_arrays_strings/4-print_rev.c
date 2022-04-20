#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string, in rev
 *
 * @s: string
 */
void print_rev(char *s)
{
	int len, i, lind, rind;
	char temp;

	len = strlen(s);
	lind = 0;
	rind = len - 1;

	for (i = lind; i < rind; i++)
	{
		temp = s[i];
		s[i] = s[rind];
		s[rind] = temp;
		rind--;
	}
}

