#include <stdio.h>

/**
 * main - print the alphabet in lowercase
 * followed by uppercase and a newline
 * Return: Always 0(success)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	for (ch = 'A'; ch <= 'Z'; ch++)
	putchar(ch);
	putchar('\n');
	return (0);
}
