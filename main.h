#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdint.h>
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
/*These fuctions can be found in functions.c*/
int _strlen(char *c);
int print_hexa(unsigned int num, int form);
void _puts(char *str);
char *rot13(char *s);

/*from specifer functions.c */
int use_c(va_list arg);
int use_s(va_list arg);
int use_i(va_list arg);
int use_d(va_list arg);
int use_u(va_list arg);
int use_o(va_list arg);
/*from binary.c */
int use_b(va_list arg);
/*from more_functions.c */
int use_hex(va_list arg);
int use_HEX(va_list arg);
int use_S(va_list arg);
int use_p(va_list arg);
int use_r(va_list arg);

/*From rot_13.c*/
int use_R(va_list arg);

#endif
