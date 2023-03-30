#include "main.h"
/**
 * times_table - display the 9 times table
 * Return: Always 0
 */
void times_table(void)
{
	int row, column, multi, x, y;

	for (row = 0; row <= 9; row++)
	{
	for (row = 0; column <= 9; column++)
	{multi = row * column;
	x = multi / 10;
	y = multi % 10;

	if (column == 0)
	{
	_putchar('0');
	}
	else if (multi < 10)
	{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar(y + '0');
	}
	else
	{
	_putchar(',');
	_putchar(' ');
	_putchar(x + '0');
	_putchar(y + '0');
	}
	}
	_putchar('\n');
	}
}
