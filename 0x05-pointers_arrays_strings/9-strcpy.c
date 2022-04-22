#include "main.h"

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
	if (dest == NULL)
	{
		return (NULL);
	}

	char *ptr = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}
