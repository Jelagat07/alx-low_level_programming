#include "main.h"
/**
 * print_to_98 - display natural numbers between n to 98
 * @n: an integer
 * Return: Always 0-Success
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{_putchar(n + '0');
		n++; }
	}
	else if (n > 98)
	{
		while (n > 98)
			{_putchar (n + '0');
	n--; }
	}
}

