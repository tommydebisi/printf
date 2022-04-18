#include "main.h"

/**
 * use_hex - changes from base 10 to base 16
 * @arg: holds the value to be displayed
 * Return: length of char numbers
 */
int use_hex(va_list arg)
{
	/*declare variables to be used in loop and hold arg*/
	long int i, j, k, val, remainder;
	char *ptr;
	unsigned int decimal = va_arg(arg, int);

	val = decimal;

	if (decimal == 0)
		return (_putchar('0'));
	/*getting length of output*/
	i = 0;
	while (val > 0)
	{
		val /= 16;/* start getting length after division*/
		i++;
	}
	/*mallocing space to keep remainder*/
	ptr = malloc(sizeof(char) * i);
	if (ptr == NULL)
		return (-1);
	/*putting each character in malloced space*/
	for (j = 0; j < i; j++)
	{
		remainder = decimal % 16;
		if (remainder < 10)
			ptr[j] = remainder + 48;
		else
			ptr[j] = remainder + 87;
		decimal /= 16;
	}
	/*printing malloc in reverse*/
	for (k = j - 1; k >= 0; k--)/*minus 1 from j cause j = i*/
		_putchar(ptr[k]);
	free(ptr);
	return (i);
}

/**
 * use_HEX - changes from base 10 to base 16
 * @arg: holds the value to be displayed
 * Return: length of char numbers
 */
int use_HEX(va_list arg)
{
	/*declare variables to be used in loop and hold arg*/
	long int i, j, k, val, remainder;
	char *ptr;
	unsigned int decimal = va_arg(arg, int);

	val = decimal;

	if (decimal == 0)
		return (_putchar('0'));
	/*getting length of output*/
	i = 0;
	while (val > 0)
	{
		val /= 16;/* start getting length after division*/
		i++;
	}
	/*mallocing space to keep remainder*/
	ptr = malloc(sizeof(char) * i);
	if (ptr == NULL)
		return (-1);
	/*putting each character in malloced space*/
	for (j = 0; j < i; j++)
	{
		remainder = decimal % 16;
		if (remainder < 10)
			ptr[j] = remainder + 48;
		else
			ptr[j] = remainder + 55;
		decimal /= 16;
	}
	/*printing malloc in reverse*/
	for (k = j - 1; k >= 0; k--)/*minus 1 from j cause j = i*/
		_putchar(ptr[k]);
	free(ptr);
	return (i);
}

/**
 * use_S - prints strings and hexa
 * @arg: holds the value to be displayed
 * Return: length of char numbers
 */

int use_S(va_list arg)
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
	{
		if ((s[i] > 0 && s[i] < 32) || (s[i] >= 127))
		{
			_putchar(92);
			_putchar('x');
			if (s[i] < 16)
				_putchar('0');
			print_HEX(s[i]);
		}
		else
			_putchar(s[i]);
	}
	return (i);

}
