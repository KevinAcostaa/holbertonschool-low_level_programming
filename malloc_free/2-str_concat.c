#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function
 * @s1: cadena
 * @s2:cadena
 * Return: cadena concat
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *strconcat;
	int k1, k2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{

	}
	for (j = 0; s2[j] != '\0'; j++)
	{

	}

	strconcat = malloc(i + j + 1 * sizeof(char));

	if (strconcat == 0)
	{
		return (NULL);
	}
	for (k1 = 0; k1 < i; k1++)
	{
		strconcat[k1] = s1[k1];
	}
	for (k2 = 0; k2 < j; k2++)
	{
		strconcat[k1] = s2[k2];
		k1++;
	}
	strconcat[k1] = '\0';
	return (strconcat);


}
