#include "main.h"
/**
 * _isalpha - checks for alphabetic characters
 * @c: a character
 * Return: 0 or 1
 */
int _isalpha(int c)
{
	if (c > 'a' && c <= 'Z')
	return (1);
	else
	return (0);
}
