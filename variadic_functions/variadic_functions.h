#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H
#include <stdarg.h>
#include <stdio.h>
int sum_them_all(const unsigned int n, ...);

typedef struct data
{
	char* type;
	void (*f)(va_list p);
} data;

#endif
