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
/**
 * use_u - when format is u
 * @arg: holds the value being displayed
 * Return: the length of the displayed value
 */

int use_u(va_list arg)
{
	/*declare variables to be used in loop and hold arg*/
	unsigned int num, divisor = 1, len = 0, j, get;

	num = va_arg(arg, unsigned int);
	/*going through loop to get the divisor*/
	for (j = 0; num / divisor > 9; divisor *= 10, j++)
		;
	/*getting each number using loop*/
	for (; divisor >= 1; num %= divisor, divisor /= 10, len++)
	{
		/*get the number from front and print*/
		get = num / divisor;
		_putchar('0' + get);
	}
	return (len);
}
/**
 * use_o - change from base 10 to base 8
 * @arg: holds the value to be displayed
 * Return: print and return length of char numbers
 */
int use_o(va_list arg)
{
	/*declare variables to be used in loop and hold arg*/
	long int i, j, k, val, cou;
	char *ptr;
	unsigned int decimal = va_arg(arg, int);

	val = decimal;

	if (decimal == 0)
		return (_putchar('0'));
	/*getting length of output*/
	i = 0;
	while (val > 0)
	{
		val /= 8;/* start getting length after division*/
		i++;
	}
	/*mallocing space to keep remainder*/
	ptr = malloc(sizeof(char) * i);
	if (ptr == NULL)
		return (-1);
	/*putting each character in malloced space*/
	for (j = 0; j < i; j++)
	{
		cou = decimal % 8;
		ptr[j] = cou + 48;
		decimal /= 8;
	}
	/*printing malloc in reverse*/
	for (k = j - 1; k >= 0; k--)/*minus 1 from j cause j = i*/
		_putchar(ptr[k]);
	free(ptr);
	return (i);
}
