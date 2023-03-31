#include "main.h"
/**
 * print_last_digit - displays last figure of a number
 * Description: uses the modulo 10 to find the last digit
 * @n: an integer parameter
 * Return: an integer
 */
int print_last_digit(int n)
{
	int last;

	if (n < 0)
	{
	last = (-1 * (n % 10));
	_putchar(last + '0');
	return (last);
	}
	else
	{
	last = n % 10;
	_putchar(last + '0');
	return (last);
	}
}
