#include "main.h"
/**
 * _strncat -  concatenates two strings.
 * @dest: variable pointing to char
 * @src: src pointer pointing to char
 * @n: number of bytes in src
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	unsigned int i = 0;
	int j = 0;

	while (*(dest + i) != '\0')
		i++;
	while (*(src + j) != '\0')
	{
		if (j < n)
		{
			*(dest + i) = *(src + j);
			i++;
		}
		j++;
	}
	return (dest);
}
