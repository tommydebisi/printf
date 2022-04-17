#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * struct ch - struct ch
 * @str: pointer to string
 * @f: funtion pointer
 */
typedef struct ch
{
	char *str;
	int (*f)(va_list);
} chr_st;
/*from struct array func*/
int count_spec(char ch, va_list arg);

int _putchar(char c);
int _printf(const char *format, ...);
int _strlen(char *c);

/*from specifer functions.c */
int use_c(va_list arg);
int use_s(va_list arg);
int use_i(va_list arg);
int use_b(va_list arg);

#endif
