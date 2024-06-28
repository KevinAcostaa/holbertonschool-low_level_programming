#include "main.h"
/**
 * _sqrt_raiz_c - description
 * @x: variable
 * @n: variable
 * Return: always
 */
int _sqrt_raiz_c(int x, int n)
{
	if (x > n)
		return (-1);

	else if (n != (x * x))
		x++;
	else
		return (x);

	return (_sqrt_raiz_c(x, n));
}
int _sqrt_recursion(int n)
{
	int x = 1;

	return (_sqrt_raiz_c(x, n));
}
