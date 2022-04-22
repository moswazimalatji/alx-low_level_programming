#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * randPassGen - randomly gen pass
 *
 * @N: lenth
 */
void randPassGen(int N)
{
	int i, randm;

	i = 0;
	randm = 0;

	srand((unsigned int)(time(NULL)));

	char nums[] = "0123456789";
	char lowLet[] = "abcdefghijklmnopqrstuvwxyz";
	char upperLet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char sym[] = "!@#$^&*?";
	randm = rand() % 4;
	char pass[N];

	for (i = 0; i < N; i++)
	{
		if (randm == 1)
		{
			pass[i] = nums[rand() % 10];
			randm = rand() % 4;
			printf("%c", pass[i]);
		} else if (randm == 2)
		{
			pass[i] = sym[rand() % 8];
			randm = rand() % 4;
			printf("%c", pass[i]);
		} else if (randm == 3)
		{
			pass[i] = upperLet[rand() % 26];
			randm = rand() % 4;
			printf("%c", pass[i]);
		} else
		{
			pass[i] = lowLet[rand() % 26];
			randm = rand() % 4;
			printf("%c", pass[i]);
		}
	}
}

/**
 * main - start of program
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int N = 10;

	randPassGen(N);
	return (0);
}

