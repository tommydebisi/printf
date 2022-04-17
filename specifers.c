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
 * Return: the length of displayed vaule
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
