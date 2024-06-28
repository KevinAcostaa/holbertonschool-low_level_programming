#include "main.h"
/**
 * _sqrt_recursion - kalalalaa
 * _sqrt_raiz - function that returns the natural square root a number
 * @x: variable
 * @n: variable
 * Return: always
 */
int _sqrt_raiz(int x, int n)
{
	if (x > n)
		return (-1);

	else if (n != (x * x))
		x++;
	else
		return (x);

	return (_sqrt_raiz(x, n));
}
int _sqrt_recursion(int n)
{
	int x = 1;

	return (_sqrt_raiz(x, n));
}
