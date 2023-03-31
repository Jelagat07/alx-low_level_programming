#include "main.h"
/**
 * jack_bauer - displays every hour and minute of the day
 * Return: an integer
 */
void jack_bauer(void)
{
	int h = 0, m = 0, tens, ones;

	while (h < 24)
	{
	tens = ((h % 100) / 10);
	ones = (h % 10);
	_putchar(tens + '0');
	_putchar(ones + '0');
	_putchar(':');
	while (m < 60){
	tens = ((m % 100) / 10);
	ones = (m % 10);
	_putchar(tens + '0');
	_putchar(ones + '0');
	_putchar('\n');
	m++;
	}
	h++;
	}
}
