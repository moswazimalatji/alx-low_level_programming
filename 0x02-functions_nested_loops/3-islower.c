#include <stdio.h>
#include <ctype.h>

/**
 * _islower - check lowercase
 *
 * c - input character
 *
 * return: 1 if is lower else 0.
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	return (0);
}
