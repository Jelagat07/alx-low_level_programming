#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase, followed
 * by a new line
 * Return: Always 0(Success)
 */
int main(void)
{
	int i;
	int k;

	for (i = 48; i <= 57; i++)
	{
	putchar(i);
	}
	for (k = 97; k <= 102; k++)
	{
	putchar(k);
	}
	putchar('\n');
	return (0);
}
