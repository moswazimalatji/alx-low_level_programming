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
	int neg, num, i;

	i = 0;
	neg = 1;
	num = 0;

	while (s[i] <= ' ')
		i++;

	if (s[i] == '-' || s[i] '+')
	{
		if (s[i] == '-')
		{
			neg *= -1;
		}
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		num = num * 10 + (s[i] - 48);
		i++;
	}
	return (num * neg);
}
