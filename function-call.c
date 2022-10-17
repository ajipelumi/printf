#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * func_call - receives the main string and calls the required function
 *
 * @format: A string containing characters
 * @ops: structure that houses our specifiers
 * @ap: A list containing all the argumentents
 *
 * Return: the number of characters printed
 */

int func_call(const char *format, print_func ops[], va_list ap)
{
	int i, j, count = 0, value = 0;

	for (i = 0; format[i] != '\0'; i++) /* iterate through the format string */
		if (format[i] == '%') /* checks for specifier */
		{
			for (j = 0; ops[j].str != NULL; j++) /* iterates through our struct */
			{
				if (format[i + 1] == ops[j].str[0])  /* format specifier exists */
				{
					value = ops[j].func(ap); /* calls the associated function */
					if (value == -1)
					{
						return (-1);
					}
					count += value;
					break;
				}
			}
			if (ops[j].str == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					count = count + 2;
				}
				else
				{
					return (-1);
				}
			}
		i = i + 1;
		}
		else
		{
			_putchar(format[i]); /* prints the character */
			count++;
		}
	return (count);
}
