#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,and then in uppercase
 *
 * Return: Always 0.
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	char ch = 'A';
	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
