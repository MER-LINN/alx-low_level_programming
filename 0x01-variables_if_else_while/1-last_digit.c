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
	if (last > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, last);
	}
	else if (last == 0)
	{
		printf("Last digit of %i and is 0\n", n, last);
	}
	else if (last < 6 && last != 0)
	{
		printf("Last digit of %i and is less than 6 and not 0\n", n, last);
	}
	return (0);
}
