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
	char letter = 'A';
	while (letter <= 'Z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
