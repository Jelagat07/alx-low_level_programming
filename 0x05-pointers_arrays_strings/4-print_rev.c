#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: a string parameter
 */
void print_rev(char *s)
{
	int m = 0;
	int n;

	while (s[m] != '\0')
	{
	m++;
	}
	for (n = m - 1; n >= 0; n--)
	{
	_putchar(s[n]);
	}
	_putchar('\n');
}
