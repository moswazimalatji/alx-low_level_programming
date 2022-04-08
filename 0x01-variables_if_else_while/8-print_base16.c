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

	for (i = 0; i <= 9; i++)
	{
		putchar(i % 10 + '0');
	}
	for (i = 'a'; i <= 'f'; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
