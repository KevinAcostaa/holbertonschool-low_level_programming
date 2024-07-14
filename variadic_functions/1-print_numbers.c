#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - function prints num
 *
 * @separator: separador
 * @n: variable
 * Return: return
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list valist;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(valist, int));
		if (separator && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(valist);
}
