#include "main.h"

/**
 * op_conv - integer to ascii
 * @num: num
 * @base: base
 * Return: char
 * https://gist.github.com/narnat/95733cd0ad7bfac0d90697292914c407
 */
char *op_conv(long int num, int base)
{
	static char *array = "0123456789abcdef";
	static char string[50];
	char sign = 0;
	char *point;
	unsigned long n = num;

	if (num < 0)
	{
		n = -num;
		sign = '-';
	}
	point = &string[49];
	*point = '\0';

	do      {
		*--point = array[n % base];
		n /= base;
	} while (n != 0);

	if (sign)
		*--point = sign;
	return (point);
}

/**
 * print - print char.
 * @str: string.
 * Return: string length.
 */

int print(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
		_putchar(str[a]);

	return (a);
}

/**
 * _strcmp - Compare two strings
 * @s1: String 1
 * @s2: String 2
 * Return: Integer
 **/
int _strcmp(char *str1, char *str2)
{
	int a;

	for (a = 0; str1[a] != '\0'; a++)
	{
		if (str1[a] != str2[a])
			return (str1[a] - str2[a]);
	}

	return (0);
}


