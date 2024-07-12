#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - function
 * @s1: string
 * @s2: string
 * @n: bytes
 * Return: Always
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	char *result;
	unsigned int i, total_long;
	unsigned int long1, long2;

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
	
	if (n > long2)
	{
		n = long2;
	}

	total_long = long1 + n;

	result = malloc(total_long + 1);

	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < total_long; i++)
	{
		if (i < long1)
		{
			result[i]= s1[i];
		}
		else
		{
			result[i]= s2[i - long1];
		}
		result[i] = '\0';

		return (result);
	}
	return (0);
}
