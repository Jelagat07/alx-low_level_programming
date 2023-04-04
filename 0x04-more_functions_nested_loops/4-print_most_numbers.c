#include "main.h"
/**
 * print_most_numbers - prints numbers 0 to 9 followed by
 * a newline
 * excluding 2 and 4
 * Return: void
 */
void print_most_numbers(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
		while (c != 2 && c != 4)
		{
		_putchar(c + '0');
		}
	}
	_putchar('\n');
}
