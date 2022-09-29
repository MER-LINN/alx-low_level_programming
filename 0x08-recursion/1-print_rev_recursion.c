#include "main.h"
/**
 * _print_rev_recursion- print a string in reverse
 * @s: pointer that have the address of the string
 * Return always 0
 */
void _print_rev_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		i++;
	}
	else
	{
		return;
	}
	_print_rev_recursion(&s[i]);
	i--;
	_putchar(s[i]);
}
