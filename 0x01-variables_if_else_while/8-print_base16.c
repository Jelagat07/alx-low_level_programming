#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase, followed
 * by a new line
 * Return: Always 0 (Success)
 * @int: an integer
 */
int putchar(int);
int main(void)
{
	int n;
	char ch;

	for (n = 12; n < 22; n++)
	{
	for (ch = 'a'; ch <= 'f'; ch++)
	{
	putchar(ch);
	}}
	putchar('\n');
	return (0);
}
