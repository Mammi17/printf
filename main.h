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

/* utils.c */
int _strlen(const char *);
int print(char *);
char *itoa(long int, int);

/* printf.c */
int _printf(const char *, ...);

/* handler.c */
int handler(const char *, va_list);
int percent_handler(const char *, va_list, int *);

/* printers */
int print_string(va_list);
int print_char(va_list);
int print_integer(va_list);
int print_binary(va_list);
int print_rot(va_list);
int print_unsigned(va_list);
int print_octal(va_list);
int print_hexadecimal_low(va_list);
int print_hexadecimal_upp(va_list);
int print_pointer(va_list);
int print_rev_string(va_list);

/* _putchar.c */
int _putchar(char);
int buffer(char);

#endif /* MAIN_H */
