#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
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
	va_list ap;
	char c = '\n';
	unsigned int i, j;
	print_func ops[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent}
	};

	va_start(ap, format);
	i = 0; /* start of our format string */
	while (format && format[i])
	{
		j = 0;
		/**
		* start of our struct "ops". We have only structured
		* three (3) characters in our format string meaning only three (3)
		* characters will return a function if found in our format string.
		*/
		if (format[i] == '%')
		{
			i++;
			while (j < 3 && format[i] != *(ops[j]).str)
			{
			/**
			* the first character in our format string will be scanned
			* through our three (3) structured characters, if the first character does
			* not match, it increases j to the next character until there is a match,
			*/
				j++;
			}
			if (j < 3)
			{
				ops[j].func(ap);
			}
		}
	i++;
	}
	va_end(ap);
	return (write(1, &c, 1)); /* print a new line */
}


