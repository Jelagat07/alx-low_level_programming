#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - print sum of two diagonals of a square
 * matrix of integers
 * @a: square matrix
 * @size: size of matrix
 */
void print_diagsums(int *a, int size)
{
	int m;
	unsigned int combi = 0;
	unsigned int combi1 = 0;

	for (m = 0; m < size; m++)
	{
	combi += a[(size * m) + m];
	combi1 += a[(size * (m + 1)) - (m + 1)];
	}
	printf("%d. %d\n", combi, combi1);
}
