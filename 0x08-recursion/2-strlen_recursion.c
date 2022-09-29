#include "main.h"

/**
 *_strlen_recursion - function that returns the length of a string
 *@s:pointer with the address of the string
 * Return: Always 0 (Success)
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		i++;
		return (_strlen_recursion(&s[i]) + 1);
	}
	else
	{
		return (0);
	}

}
