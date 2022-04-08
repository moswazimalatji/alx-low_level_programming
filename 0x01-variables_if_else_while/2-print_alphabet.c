#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/*
 * Main functon will run the program of printing alphabet
 */
int main(void)
{
	int i;


	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
