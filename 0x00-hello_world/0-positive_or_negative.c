#include <stdlib.h>
#include <time.h>

/*
 * main - Entry Point
 * Description: betty style doc for function main goes there
 * Result = 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}
