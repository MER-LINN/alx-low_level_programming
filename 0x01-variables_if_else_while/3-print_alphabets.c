#include  <stdio.h>

/**
 * main - Entry Point
 * Description: A program that prints alphabets in upper and lowercase
 * Return: 0
*/
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	putchar(ch);

	for (ch = 'A'; ch <= 'Z'; ch++)
	putchar(ch);
	putchar('\n');
	return (0);
}

