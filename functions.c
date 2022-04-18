#include "main.h"

/**
 * _strlen - calculate the length of a string
 * @c: string passed as argument
 * Return: return length of string
 */

int _strlen(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		continue;
	}
	return (i);
}

/**
 * print_HEX - converts from base 10 to 16
 * @num: unsigned int
 * Return: num of characters
 */

int print_HEX(unsigned int num)
{
	/*declare variables to be used in loop and hold arg*/
	long int i, j, k, remainder;
	unsigned int val;
	char *ptr;

	val = num;

	if (num == 0)
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
		remainder = num % 16;
		if (remainder < 10)
			ptr[j] = remainder + 48;
		else
			ptr[j] = remainder + 55;
		num /= 16;
	}
	/*printing malloc in reverse*/
	for (k = j - 1; k >= 0; k--)/*minus 1 from j cause j = i*/
		_putchar(ptr[k]);
	free(ptr);
	return (i);
}
