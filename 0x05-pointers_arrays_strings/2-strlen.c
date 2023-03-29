#include "main.h"
/**
 * _strlen - a function that returns the length of a string
 * Return: Always 0-success
 * @s: a pointer to a character string
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{count++;
	s++;
	}
	return (count);
}
