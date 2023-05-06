#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: Number to search
 * @index: Index of the bit to get, starting from 0
 *
 * Return: Value of the bit
 *	   If an error occurs - -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
