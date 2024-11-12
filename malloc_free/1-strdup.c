#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function
 * @str: cadena
 * Return: copy
 */
char *_strdup(char *str)
{
	char *copy;
	int i, l;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{

	}

	copy = malloc(i + 1 * sizeof(char));

	if (copy == NULL)
	{
		return (NULL);
	}

	for (l = 0; str[l] != '\0'; l++)
	{
		copy[l] = str[l];
	}
	copy[l] = '\0';

	return (copy);



}
