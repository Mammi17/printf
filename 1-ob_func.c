#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * ob_func - that prints the correct character
 * @a: a character
 * Return: an integer
 */

int (*ob_func(char a))(va_list note)
{
	int j;
	ob point[] = {
		{"s", op_st},
		{"c", op_c},
		{"i", op_t},
		{"d", op_de},
		{"%", op_cent},
		{NULL, NULL}
	};
	for (j = 0; point[j].cor != '\0'; j++)
	{
		if (a == point[j].cor[0])
			return (point[j].funct);
	}
	return (NULL);
}
