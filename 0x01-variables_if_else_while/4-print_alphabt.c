#include <stdio.h>

/**
 * main -Entry Point
 * Description: A program that prints alphabets with exceptions
 * Return: 0
*/
int main(void)
{
	int(ch);
	for (ch = 'a'; ch <= 'z'; ch++)
	if (ch != 'q'; ch != 'e')
	putchar(ch);
	putchar('\n');

	return (0);
}
