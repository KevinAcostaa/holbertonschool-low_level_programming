#include <stdio.h>
/**
 * main - function
 *
 * Return: 0
 */
int main(void)
{
	char ch, upperch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (upperch = 'A'; upperch <= 'Z'; upperch++)
	{
		putchar(upperch);
	}
		putchar('\n');
		return (0);
}
