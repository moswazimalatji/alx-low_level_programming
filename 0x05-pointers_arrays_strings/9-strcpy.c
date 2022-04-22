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
	int i;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i + 1] = src[i];
	return (dest);
}
