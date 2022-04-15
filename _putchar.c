#include <unistd.h>
/**
 * _putchar - prints a character
 * @c: character
 * Return: character
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
