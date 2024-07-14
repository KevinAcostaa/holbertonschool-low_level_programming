#include "variadic_functions.h"
/**
 * sum_them_all - suma
 * @n: n cantidad
 * Return: return
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int j = 0;
	int sum = 0;
	va_list r;

	va_start(r, n);

	for (j = 0; j < n; j++)
	{
		sum += va_arg(r, int);
	}

	va_end(r);
	return (sum);
}
