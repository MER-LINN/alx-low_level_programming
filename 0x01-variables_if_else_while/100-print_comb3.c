#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: code that prints all possible combination of two digits
 * Return: 0
 */

int main(void)
{
	int c;
	int d = 0;
	/* your code goes there */
	while (d < 10)
	{
		c = 0;
		while (c < 10)
		{
			if (d != c && d < c)
			{
				putchar('0' + d);
				putchar('0' + c);
				if (c + d != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			c++;
		}
		d++;
	}
	putchar('\n');
	return (0);
}
