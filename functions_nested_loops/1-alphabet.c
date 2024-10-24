#include "main.h"
/**
 * main - function
 * print_alphabet - imprime alfabeto en minuscula
 * Return: 0
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
