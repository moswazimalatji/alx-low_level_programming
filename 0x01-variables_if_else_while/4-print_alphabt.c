#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * return: Always return 0 (success)
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'e' || i != 'q')
		{
			putchar(i);
		}
	}
	putchar('\n');

	return (0);
}
