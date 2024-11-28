#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_string - function
 * @separator: cadena
 * @n: n
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int l;
	char *str;
	va_list p;

	if (separator == NULL)
	{
		separator = "";
	}

	va_start(p, n);

	for (l = 0; l < n; l++)
	{
		str = va_arg(p, char*);

		if (str == NULL)
		{
			str = "(nil)";
		}

		if (l + 1 < n)
		{
			printf("%s%s", str, separator);
		}
		else
		{
			printf("%s", str);
		}
	}
	va_end(p);
	printf("\n");
}
