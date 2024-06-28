#include "main.h"
/**
 * _sqrt_recursion - assasa
 * raiz_c - assasasasasa
 * @x: variable
 * @n: variable
 * Return: always
 *
 */
int raiz_c(int x, int n)
{
	if (x > n)
		return (-1);

	else if (n != (x * x))
		x++;
	else
		return (x);

	return (raiz_c(x, n));
}
int _sqrt_recursion(int n)
{
	int x = 1;

	return (raiz_c(x, n));
}
