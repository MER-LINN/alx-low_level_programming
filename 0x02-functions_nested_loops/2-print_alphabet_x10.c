#include "main.h"

/**
* print_alphabet_x10 - Entry point
* Description -> A function that prints 10 times the alphabet, in lowercase
* Return: Always 0
*/

void print_alphabet_x10(void)
{
			int j;
			int x;

			for (x = 0; x < 10; x++)
			{
				for (j = 'a'; j <= 'z'; j++)
				{
					_putchar(j);
				}
				_putchar('\n');
		}
}
