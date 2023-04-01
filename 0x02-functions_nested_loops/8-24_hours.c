#include "main.h"
/**
 * jack_bauer - displays every hour and minute of the day
 * Return: an integer
 */
void jack_bauer(void)
{
	int h = 0;
	int m = 0;
	int h_tens, h_ones, m_tens, m_ones;

	while (h < 24)
	{
	while (m < 60)
	{m_tens = ((m % 100) / 10);
	m_ones = (m % 10);
	_putchar(h_tens + '0');
	_putchar(h_ones + '0');
	_putchar(':');
	_putchar(m_tens + '0');
	_putchar(m_ones + '0');
	_putchar('\n');
	m++;
	}
	h++;
	}
}
