#include "main.h"
/**
 * print_last_digit - function
 * @n: number
 * Return: always
 */
int print_last_digit(int n)
{
	n %= 10;

	if (n < 0)
	{
		n *= -1;
	}
	_putchar(n + '0');
	return (n);
}
