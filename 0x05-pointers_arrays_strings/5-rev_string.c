#include "main.h"
/**
 * rev_string - reverses a string
 * Return: void
 * @s: a character string
 */
void rev_string(char *s)
{
	int j;

	j = strlen(s);
	while (j > 0)
	{
		_putchar(s[j]);
		j--;
	}
}
