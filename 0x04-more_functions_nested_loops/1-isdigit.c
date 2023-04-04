#include "main.h"
/**
 * _isdigit - checks for a digit 0 to 9
 * Return: an integer, 0 or 1
 * @c: an integer
 */
int _isdigit(int c)
{
	if (c >= 0 && c < 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
