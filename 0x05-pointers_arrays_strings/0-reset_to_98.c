#include <stdio.h>
#include "main.h"

/*
* main - a function that takes a pointer to an int
* Description: Pointers
* Return: 0
*
*/
int main(void)
{
		int s;
		int *p;

		s = 98;
		p = &s;
		putchar("s=%d/n", s);
		return (0);
}
