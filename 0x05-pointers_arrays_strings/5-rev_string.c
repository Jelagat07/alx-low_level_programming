#include "main.h"
/**
 * rev_string - reverses a string
 * Return: void
 * @s: a character string
 */
void rev_string(char *s)
{
	int i, j, m;
	char tempo;

	i = 0;
	j = strlen(s);
	m = j / 2;
	while (m--)
	{
	tempo = s[j - i - 1];
	s[j - i - 1] = s[i];
	s[i] = tempo;
	i++;
	}

}
