#include "main.h"
/**
 * rev_string - function
 *
 * @s: pointer
 */
void rev_string(char *s)
{
	int leng = 0;
	int i;
	char cadena;

	while (s[leng] != '\0')
	{
		leng++;
	}
	for (i = 0; i < leng / 2; i++)
	{
		cadena = s[i];

		s[i] = s[leng - 1 - i];
		s[leng - 1 - i] = cadena;
	}
}
