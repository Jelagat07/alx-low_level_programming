#include "main.h"
/**
 * _isdigit - checks for a digit 0 to 9
 * Return: 0 or 1
 * @c: a parameter
 */
int _isdigit(int c)
{
	if (c >= 48 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
