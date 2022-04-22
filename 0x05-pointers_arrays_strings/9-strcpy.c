#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * _strcpy - copies the string
 *
 * @dest: destionation
 *
 * @src: sorce
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr;

	ptr = dest;

	if (dest == NULL)
	{
		return (NULL);
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}
