#include "main.h"

/**
 * use_b - this converts an int to binary
 * @arg: holds the value being displayed
 * Return: the length of displayed value
 */

int use_b(va_list arg)
{
	/*declare local variables*/
	int divisor = 2, len = 0, i, j, k, newval;
	int *ptr;
	int val = va_arg(arg, int);

	if (val == 0)
	{
		_putchar ('0');
		len++;
		return (len);
	}
	if (val < 0)
		return (-1);
	newval = val;
	i = 0;
	while (newval > 0)
	{
		newval /= divisor;
		i++;
	}
	ptr = malloc(sizeof(int) * i);
	if (ptr == NULL)
		return (-1);
	for (j = 0; j < i; j++)
	{
		ptr[j] = val % divisor;
		val /= divisor;
	}
	for (k = j - 1; k >= 0; k--)
		_putchar(ptr[k] + '0');
	free(ptr);
	return (i);
}
