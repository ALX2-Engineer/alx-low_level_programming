#include "main.h"

/**
 * flip_bits - counts the number of bits to be changed to achieve solution
 * @n: first number
 * @m: second number
 *
 * Return: the number of bits to be changed
 */
 
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, count = 0;
	unsigned long int q; /* this Current*/
	unsigned long int exclusive = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		q = exclusive >> j;
		if (q & 1)
			count++;
	}

	return (count);
}
