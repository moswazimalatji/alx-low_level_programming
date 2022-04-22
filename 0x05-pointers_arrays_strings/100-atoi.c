#include "main.h"

/**
 * _atoi - convert str to int
 *
 * @s: string
 *
 * Return: a number
 */
int _atoi(char *s)
{
	int num, i;

	i = 0;
	num = 0;

	for (i = 0; s[i] != '\0'; i++)
		num = num * 10 + s[i] - '0';

	return (num);
}
