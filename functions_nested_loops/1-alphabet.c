#include "main.h"
/**
 * print_alphabet - imprime alfabeto en minuscula
 *
 */
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
