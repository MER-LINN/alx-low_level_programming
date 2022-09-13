#include <stdio.h>

/**
 * main -Entry Point
 * Description: A program that prints single characters in base 10
 * Return: 0
*/
int main(void)
{
	int ch;

	for (ch = 0; ch <= 9; ch++)
	printf("%d", ch);
	putchar('\n');
	return (0);
}
