#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct ob - a structure
 * @cor: a character
 * @f: a function pointer
 */

typedef struct ob
{
	char *cor;
	int (*funct)(va_list);
} ob;

int op_st(va_list note, spe *p);
int op_de(va_list note);
int op_t(va_list note, spe *p);
int op_c(va_list note, spe *p);
int op_cent(va_list note);
int _printf(const char *format, ...);
int display(char c);
int (*ob_func(char a))(va_list note);
int op_bi(va_list);
int op_rot(va_list);
int op_unsigned(va_list);
int op_octal(va_list);
int op_hexadecimal_low(va_list);
int op_hexadecimal_upp(va_list);
int op_pointer(va_list);
int op_rev_string(va_list);

/* utils.c */
int _strcmp(char *str1, char *str2);
int print(char *);
int buffer(char c);
char *op_conv(long int, int);

/* handler.c */
int handler(const char *, va_list);
int percent_handler(const char *, va_list, int *);

/* _putchar.c
int _putchar(char);
int buffer(char);*/

#endif /* MAIN_H */
