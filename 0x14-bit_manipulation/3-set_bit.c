#include "main.h"

/**
 * set_bit - Sets the bit value at a given index to 1
 * @n: Pointer to the number to change
 * @index: Index of the bit to set, starting from 0 
 *
 * Return: 1 for success
 *         -1 if error occurs
 */
int set_bit(unsigned long int *n, unsigned int index)
{
        if (index > 63)
                return (-1);

        *n = ((1UL << index) | *n);
        return (1);
}
