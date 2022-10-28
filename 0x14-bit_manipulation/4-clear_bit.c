#include "main.h"
#include <stdio.h>

/**
 * clear_bit - set the value of a bit to 0 at a given index
 * @n: pointer to decimal number to change
 * @index: index position to change
 *
 * Return: 1 if it worked, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int revnum;
	unsigned long int num;
	unsigned long int count;
	unsigned long int oldn;

	revnum = count = num = 0;
	oldn = *n;
	if (index > 63)
		return (-1);
	while (count < 63)
	{
		revnum = revnum << 1;
		if (count == index)
			revnum += 0;
		else
			revnum += oldn & 1;
		count++;
		oldn = oldn >> 1;
	}
	while (count > 0)
	{
		num = num << 1;
		num += revnum & 1;
		revnum = revnum >> 1;
		count--;
	}
	*n = num;
	return (1);
}
