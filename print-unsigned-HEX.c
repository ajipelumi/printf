#include "main.h"

int print_HEX(unsigned int num);
int big_HEX(unsigned int rem);

/**
 * print_unsignedHeX - unsigned int argument is converted to hexadecimal
 *
 * @ap: variadic arguments list
 *
 * Return: number of chararcters printed
*/

int print_unsignedHeX(va_list ap)
{
	unsigned int num;
	int count = 0;

	num = va_arg(ap, int);
	/* call print_HEX function */
	count = print_HEX(num);
	return (count);
}

/**
 * print_HEX - unsigned int argument is converted to hexadecimal
 *
 * @num: integer to be converted
 *
 * Return: number of characters printed
 */

int print_HEX(unsigned int num)
{
	int count = 0;
	unsigned int rem;

	if ((num / 16) != 0)
	{
		count += print_HEX(num / 16); /* recursion takes place */
	}
	rem = (num % 16);
	if (rem > 9)
	{
		count = big_HEX(rem); /* call function to print alphabets */
	}
	else
	{
	_putchar(rem + '0'); /* prints integers 0 - 9 */
	}
	return (count);
}

/**
* big_HEX - prints alphabets A - F
*
* @rem: integer to be converted
*
* Return: number of characters printed
*/

int big_HEX(unsigned int rem)
{
	int count = 0;

	rem = (rem % 10);
	switch (rem)
	{
		case 0:
			_putchar(65); /* 'A' in ASCII */
			break;
		case 1:
			_putchar(66); /* 'B' in ASCII */
			break;
		case 2:
			_putchar(67); /* 'C' in ASCII */
			break;
		case 3:
			_putchar(68); /* 'D' in ASCII */
			break;
		case 4:
			_putchar(69); /* 'E' in ASCII */
			break;
		case 5:
			_putchar(70); /* 'F' in ASCII */
			break;
		default:
			return (-1);
	}
	return (count);
}
