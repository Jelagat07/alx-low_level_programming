#include "main.h"
/**
 * _strlen - a function that returns the length of a string
 * Return: Always 0-success
 * @s: a string of characters
 */
int _strlen(char *s)
{
	int len;
	
	s = "a short character string";
	len = _strlen(s);
	printf("%d\n", len);
	return (0);
}
