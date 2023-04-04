#include "main.h"
/**
 * *_strchr - finds a character
 * @s: a string
 * @c: character
 * Return: points to the first occurence of character,
 * or void if not found
 */
char *_strchr(char *s, char c)
{
	int i;

	while (1)
	{
	i = *s++;
	if (i == c)
	{
	return (s - 1);
	}
	if (i == 0)
	{
	return (NULL);
	}
	}
}
