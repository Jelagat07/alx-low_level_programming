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
	char k;

	last = n % 10;
	{
	k = (last + '0');
	_putchar(k);
	}
	return (last);
}
