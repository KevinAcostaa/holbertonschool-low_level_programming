#include <stdio.h>
/**
 * main - function
 * @argc: argc
 * @argv: argv
 * Return: always
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc && argv[i]; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
