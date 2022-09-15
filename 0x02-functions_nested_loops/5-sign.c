#include "main.h"
/**
 * print_sign - print +, 0, or - according to the number
 *
 * @n: the value to be evaluated
 * Return: return 1 if positive 0 if value = 0 and -1 if negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (1);
	}
}
