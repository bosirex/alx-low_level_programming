#include "main.h"
/**
/* int get_endianness(void); - check for endianness
/* Return: 0 if big endian, 1 if little endian
*/

int get_endianness(void);
{
	unsigned int k = 1;
	char *a = (char*) &k;
	return (int)*a;
}
