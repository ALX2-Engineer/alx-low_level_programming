#include "main.h"

/**
 * binary_to_uint - converts binary numbers to unsigned integers
 * @b: string that is containing the binary numbers
 *
 * Return: Returns the conversted value
 */


unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int d = 0;

	if (!b)
		return (0);

	for (j = 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);
		d = 2 * d + (b[j] - '0');
	}

	return (d);
}

