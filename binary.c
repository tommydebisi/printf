#include "main.h"

/**
 * use_b - this converts an int to binary
 * @arg: holds the value being displayed
 * Return: the length of displayed value
 */

int use_b(va_list arg)
{
	/*declare local variables*/
	long int divisor = 2, len = 0, i, j, k, newval;
	int *ptr;
	unsigned int val = va_arg(arg, int);

	if (val == 0)
	{/*check if decimal is 0*/
		_putchar ('0');
		len++;
		return (len);
	}
	newval = val;
	i = 0;
	/*get the length of numbers*/
	while (newval > 0)
	{
		newval /= divisor;
		i++;
	}
	/*mallocing space for the length of numbers*/
	ptr = malloc(sizeof(int) * i);
	if (ptr == NULL)
		return (-1);
	/*start adding remainder to the malloced space*/
	for (j = 0; j < i; j++)
	{
		ptr[j] = val % divisor;
		val /= divisor;
	}
	/*print the numbers in reverse*/
	for (k = j - 1; k >= 0; k--)/*it's j-1 cause j = i*/
		_putchar(ptr[k] + '0');
	free(ptr);
	return (i);
}
