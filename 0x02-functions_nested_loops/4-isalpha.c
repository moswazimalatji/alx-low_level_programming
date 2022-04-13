#include <stdio.h>
#include <ctype.h>

/**
 * _isalpha - check alphabet
 *
 * Parameter: c character
 *
 * Return: 1 if is aplphabet else 0.
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	return (0);
}
