#include <stdio.h>

/**
 * print_alphabet_x10 - print10 alphabet
 *
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			putchar(i);
		}
	}
	putchar('\n');
}
