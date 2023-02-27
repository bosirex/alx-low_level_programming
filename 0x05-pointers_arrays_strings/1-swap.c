#include <stdio.h>

/**
 * swap_int - swaps the values of two integers.
 *
 * Returns: nothing
 */

void swap_int(int *a, int *b)
{
	int parameter = *a;
	a* = *b;
	*b = parameter;
}
