#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to
 * flip to get from one number to another.
 * @n: number.
 * @m: another.
 * Return: number of bit to flip from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int number = n ^ m;
	unsigned int val = 0;
	int length = (sizeof(number) * 8);

	while (length >= 0)
	{
		if (number & 1)
			val++;
		number = number >> 1;
		length--;
	}
	return (val);
}
