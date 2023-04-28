#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _memcpy - Copies memory area.
 * @dest: The memory area to be filled.
 * @n: Number of bytes to copy.
*
 * Return: Pointer to the memory area dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;

	for (; n; n--)
		*p++ = *src++;

	return (dest);
}

/**
 * _realloc - Reallocates a memory block.
 * @ptr: Pointer to the memory previously allocated.
 * @old_size: Old size of pointer.
 * @new_size: New size of pointer.
 *
 * Return: Void *
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nptr;

	if (new_size == old_size)
		return (ptr);

	if ((new_size == 0) && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
	{
		free(ptr);
		nptr = malloc(new_size);
		if (!nptr)
			return (NULL);
		return (nptr);
	}

	if (new_size > old_size)
	{
		nptr = malloc(new_size);
		if (!nptr)
			return (NULL);

		_memcpy(nptr, ptr, old_size);
		free(ptr);
	}
	return (nptr);
}
