#include "main.h"
/**
 * leet - function
 * @str: char
 * Return: str
 */
char *leet(char *str)
{
	int i, j;
	char *lett = "aAeEoOtTlL";
	char *num = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == lett[j])
			{
				str[i] = num[j];
			}
		}
	}

	return (str);
}
