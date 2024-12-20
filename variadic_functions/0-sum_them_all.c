#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - function
 * @n: n
 * Return: always
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum_arg = 0;
	va_list args;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum_arg += va_arg(args, int);
	}
	va_end(args);
	return (sum_arg);
}
