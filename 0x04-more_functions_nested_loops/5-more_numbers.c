#include "main.h"
/**
 * print_most_numbers - prints numbers 0 to 9 ten times
 * excluding 2 and 4
 * Return: void
 */
void print_most_numbers(void)
{
	char c = '0';

	if (c != 2 || c != 4)
	{
	while (c <= '9')
		_putchar(c);
			c++;
	}
	_putchar('\n');
}
