#include <stdio.h>

/**
 * print_sign - prints the sign
 *
 * @n: a numer
 *
 * Return: returns 1 if > 0, 0=0 else -1
 */
int print_sign(int n)
{
	if (n == 0)
	{
		putchar(0 +'0');
		return (0);
	} else if (n > 0)
	{
		putchar(2B);
		return (1);
	}
	return (-1);
}