#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void)
{
    int n;
    int last;

    srand(time(0));
    n = rand() - RAND_MAX / 2;
    last = n % 10;

    if( n <  6 && n != 0)
    {
	 printf("Last digit of %d is %d and is less than 6 not 0", n, last);

    }else if( n == 0)
    {
	printf("Last digit of %d is %d and is 0", n, last);
    }else if ( n > 5)
    {
	printf("Last digit of %d is %d and is greater than 5", n , last);
    }
    return (0);                                                                                                                                                                             
}
