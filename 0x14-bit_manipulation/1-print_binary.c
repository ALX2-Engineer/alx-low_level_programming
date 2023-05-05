#include "main.h"

/**
 * print_binary - prints the binary that is same as that of a decimal number
 * @n: the number it prints in binary
 */

void print_binary(unsigned long int n)
{
	int j, count_num = 0;
	unsigned long int current;

	for (j = 63; j >= 0; j--)
	{
		current = n >> j;

		if (current & 1)
		{
			_putchar('1');
			count_num++;
		}
		else if (count_num)
			_putchar('0');
	}
	if (!count_num)
		_putchar('0');
}
