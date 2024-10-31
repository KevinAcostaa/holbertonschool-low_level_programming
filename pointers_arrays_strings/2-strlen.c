#include "main.h"
/**
 * _strlen - function
 *
 * @s: pointer
 *
 * Return: leng
 */
int _strlen(char *s)
{
	int leng = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		leng++;
	}
	return (leng);
}
