#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: String to be searched.
 * @accept: Set of butes to be searched for.
 *
 * Return: If a set is matched - Pointer to be matched byte.
 * If no set is matched - NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}

	return ('\0');
}
