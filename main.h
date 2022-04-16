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

int _putchar(char c);

/*prototype*/
int _printf(const char *format, ...);

/*function.c*/
int _strlen(char *c);

/*from specifer functions.c */
int use_c(va_list arg);
int use_s(va_list arg);

#endif /*_MAIN_H*/
