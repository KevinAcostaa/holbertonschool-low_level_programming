#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - function
 * @s1: cadena
 * @s2: cadena
 * @n: n
 * Return: ptr
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int long1, long2, i, j;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (long1 = 0; s1[long1] != '\0'; long1++)
	{
	}
	for (long2 = 0; s2[long2] != '\0'; long2++)
	{
	}

	if (n >= long2)
	{
		n = long2;
	}

	ptr = malloc((long1 + n +1) * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < long1; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		ptr[i + j] = s2[j];
	}

	ptr[i + j] = '\0';
	return (ptr);
}
