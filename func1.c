#include "main.h"

/**
 * print_binary - Print a number in base 2
 * @list: Number to print in base 2
 * Return: Length of the numbers in binary
 */

int op_bi(va_list list)
{
	char *p;
	int size;

	p = op_conv(va_arg(list, unsigned int), 2);

	size = print(p);

	return (size);
}

/**
 * op_octal - Print a unsigned octal
 * @list: Number to print
 * Return: Length of the number
 */

int op_octal(va_list list)
{
	char *p;
	int size;

	p = op_conv(va_arg(list, unsigned int), 8);

	size = print((p != NULL) ? p : "NULL");

	return (size);
}

/**
 * op_hexadecimal_low - Print a number in hexadecimal format
 * @list: Number to print
 * Return: Length of the number
 */

int op_hexadecimal_low(va_list list)
{
	char *p;
	int size;

	p = op_conv(va_arg(list, unsigned int), 16);

	size = print((p != NULL) ? p : "NULL");

	return (size);
}

/**
 * print_hexadecimal_upp - Print a number in hexadecimal format
 * @list: Number to print
 * Return: Length of the number
 */
int op_hexadecimal_upp(va_list list)
{
	char *p;
	int size;

	p = op_conv(va_arg(list, unsigned int), 16);
	p = string_to_upper(p_buff);

	size = print((p != NULL) ? p : "NULL");

	return (size);
}

/**
 * op_unsigned - Print a unsigned int
 * @list: Number to print
 * Return: Length of the number
 */

int op_unsigned(va_list list)
{
	char *p;
	int size;

	p = op_conv(va_arg(list, unsigned int), 10);

	size = print((p != NULL) ? p : "NULL");

	return (size);
}
