#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always returns 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 9; i++)
	{
		if (i != 9)
		{
			putchar(i % 10 + '0');
			putchar(',');
			putchar(' ');
		}
	}
	putchar(9 % 10 + '0');

	return (0);
}
