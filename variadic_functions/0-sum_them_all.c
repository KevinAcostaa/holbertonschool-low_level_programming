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
	va_list p;

	va_start(p, n);

	for (j = 0; j < n; j++)
	{
		sum += va_arg(p, int);
	}

	va_end(p);
	return (sum);
}
