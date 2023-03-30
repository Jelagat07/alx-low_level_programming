#include "main.h"
/**
 * _islower - checks for lowercase characters
 * Return: Integer 0 or  1
 * @c: a character
 */
int _islower(int c)
{
	if (c > 'a' && c <= 'z')
	return (1);
	else
	return (0);
}
