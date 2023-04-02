#include "main.h"
/**
 * rev_string - reverses a string
 * Return: void
 * @s: a character string
 */
void rev_string(char *s)
{
	int i, j, m;

	j = strlen(s);
	for (i = 0; (m = j - 1); i++, j--)
	{
		_putchar(s[j] = s[i]);
		j--;
	}
}
