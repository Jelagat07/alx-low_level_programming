#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0-Success
 */
int main(void)
{
	int k;

	for (k = 48; k <= 57; k++)
	{
	putchar(k);
	if (k == 57)
	{
	continue;
	}
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}

