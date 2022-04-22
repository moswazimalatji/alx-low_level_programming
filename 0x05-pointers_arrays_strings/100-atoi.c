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
	int num, i, sign;

	i = 0;
	num = 0;
	sign = 1;

	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}

	for (; s[i] != '\0'; ++i)
		num = num * 10 + s[i] - '0';

	return (num * sign);
}
