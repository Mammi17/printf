#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @s: String to enconde
 * Return: String encode
 */


int rot13(char *s)
{
	int a, b;
	char *norml, *rot13;

	norml = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; norml[b] != '\0'; b++)
		{
			if (s[a] == norml[b])
			{
				display(rot13[b]);
				break;
			}
		}

		if (!norml[b])
			display(s[a]);
	}
	return (a);
}

/**
 * op_rot - Prints the rot13'ed string
 * @list: String to encoded
 * Return: Length of the string encoded
 */

int op_rot(va_list list)
{
	char *p_str;
	int p;

	p_str = va_arg(list, char *);
	p = rot13((p_str != NULL) ? p_str : "(ahyy)");

	return (p);
}

/**
 * op_rev_string - Print a string in reverse
 * @list: List of arguments
 * Return: Length of the string
 */

int  op_rev_string(va_list list)
{
	int a, size;
	const char *string;

	string = va_arg(list, const char *);

	size = print(string);

	for (a = size - 1; a >= 0; a--)
		_putchar(string[a]);

	return (size);
}

/**
 * op_pointer - Print a number in hexadecimal format
 * @list: Number to print
 * Return: Length of the number
 */

int op_pointer(va_list list)
{
	char *p;
	int size;

	p = op_conv(va_arg(list, unsigned long int), 16);

	if (!_strcmp(p, "0"))
		return (print("(nil)"));

	size = print("0x");

	if (!_strcmp(p, "-1"))
		size += print("ffffffffffffffff");
	else
		size += print(p);

	return (size);
}
