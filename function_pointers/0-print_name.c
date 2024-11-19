#include "function_pointers.h"
/**
 * print_name - function
 * @name: nombre
 * @f: puntero a function
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
