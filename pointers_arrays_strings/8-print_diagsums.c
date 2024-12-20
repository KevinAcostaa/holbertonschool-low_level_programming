#include "main.h"
#include "stdio.h"
/**
 * print_diagsums - function
 * @a: pointer
 * @size: size
 */
void print_diagsums(int *a, int size)
{
	int diag1 = 0, diag2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		diag1 += a[i * size + i];

		diag2 += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", diag1, diag2);
}
