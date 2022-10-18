#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - produces output according to a format
 *
 * @format: a character string. The format string
 * is composed of zero or more directives
 *
 * Return: the number of characters printed (excluding
 * the null byte used to end output to strings)
 */

int _printf(const char *format, ...)
{
	int count;
	va_list ap;
	print_func ops[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_integer},
		{NULL, NULL}
	};

	if (format == NULL)
	{
		return (-1);
	}

	va_start(ap, format);
	/* call our func_call function */
	count = func_call(format, ops, ap);
	va_end(ap);
	return (count);
}

