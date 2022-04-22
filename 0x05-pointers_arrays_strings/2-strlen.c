#include "main.h"

/**
 * _strlen - gets string length
 *
 * @s: string
 *
 * Return: the lenght of a s
 */
int _strlen(char *s)
{
	int len;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}
