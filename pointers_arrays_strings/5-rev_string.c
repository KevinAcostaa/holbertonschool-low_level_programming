#include "main.h"
/**
 * rev_string - reverse a string
 *
 * @s: input string
 *
 * Return: no return
 */
void rev_string(char *s)
{
	int longitud, i;
	char caracter;

	for (longitud = 0; s[longitud] != '\0'; longitud++)
	{
	}
	for (i = 0; i < longitud / 2; i++)
	{
		caracter = s[i];
		s[i] = s[longitud - i - 1];
		s[longitud - i - 1] = caracter;
	}
}
