#include "main.h"
/**
 *test_mult - returns the natural square root of a number.
 *@n:num to square root
 *@i:int mult test
 * Return: Always 0 (Success)
 */
int test_mult(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (test_mult(n, i + 1));
	}
}
/**
 *_sqrt_recursion - function that returns x raised to the power of y
 *@n: num to square root
 * Return: Always 0 (Success)
 */
int _sqrt_recursion(int n)
{
	return (test_mult(n, 1));
}
