#include "main.h"
/**
 * _strspn - function
 * @s: cadena 1
 * @accept: cadena 2
 * Return: longitud
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int contador = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				contador++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}
	return (contador);
}
