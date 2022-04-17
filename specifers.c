#include "main.h"
/**
 * use_c - when format is c
 * @arg: argument
 * Return: 1 if there's character, -1 if not
 */

int use_c(va_list arg)
{
	return (_putchar(va_arg(arg, int)));
}
/**
 * use_s - when format is s
 * @arg: argument
 * Return: length
 */

int use_s(va_list arg)
{
	/*declare a char pointer*/
	char *s;
	int i;

	s = va_arg(arg, char *);

	if (s == NULL)/*if string is NULL*/
		s = "(null)";
	else if (*s == '\0')/*checking for empty string*/
		return (-1);
	for (i = 0; s[i]; i++)
		_putchar(s[i]);

	return (i);
}

/**
 * use_i - when format is d or i
 * @arg: holds the value being displayed
 * Return: the length of displayed value
 */

int use_i(va_list arg)
{
	unsigned int divisor = 1, num, l, len = 0;
	int val = va_arg(arg, int);

	if (val < 0)/*if argument is negative*/
	{
		_putchar('-');
		val *= -1;
		len++;
	}
	for (l = 0; val / divisor > 9; l++, divisor *= 10)
		;/*gets the number of zeros to add while dividing*/
	for (; divisor >= 1; val %= divisor, divisor /= 10, len++)
	{
		num = val / divisor;
		_putchar('0' + num);
	}
	return (len);
}

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
