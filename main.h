#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

/**
 * struct print - struct print
 *
 * @str: The conversion specifier
 * @func: The function associated
 *
 */

typedef struct print
{
	char *str;
	int (*func)(va_list ap);
} print_func;


int _printf(const char *format, ...);
int _putchar(char c);
int func_call(char *format, print_func ops[], va_list ap);
int print_char(va_list ap);
int print_string(va_list ap);
int print_percent(__attribute__((unused))va_list ap);


#endif
