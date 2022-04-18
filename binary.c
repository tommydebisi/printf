#include "main.h"

/**
 * use_b - this converts an int to binary
 * @arg: holds the value being displayed
 * Return: the length of displayed value
 */

int use_b(va_list arg)
{
	unsigned int divisor = 2, num, len = 0;
	int val = va_arg(arg, int);
	int k[10], i;

	if (val < 0)
		return (-1);
	if (val == 0)
	{
		_putchar ('0');
		len++;
	}

	for (i = 0; val > 0; i++)
	{
		k[i] = val % divisor;
		val = val / divisor;
	}
	for (i = i - 1; i >= 0; i--, len++)
	{
		num = k[i];
		_putchar('0' + num);
	}
	return (len);
}
