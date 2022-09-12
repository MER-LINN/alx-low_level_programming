#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - 'Variables'
 * Description: This program will assign a random number to the variable n
 * Return: 0
*/

int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, last);
	}
	else if (n == 0)
	{
		printf("Last digit of %i and is 0\n", n, last);
	}
	else if (n < 6 && n != 0)
	{
		printf("Last digit of %i and is less than 6 and not 0\n", n, last);
	}
	return (0);
}
