#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct format - converter for printf
 * @ph: type char pointer of the specifier
 * @function: function for the conversion specifier
 *
 */
typedef struct format
{
	char *ph;
	int (*function)();
} convert;
int print_rot13(va_list args);
int print_x(va_list list);
int print_x2(unsigned long int num);
int print_s(va_list val);
int _strlen(char *s);
int _strlenc(const char *s);
int printbinary(va_list val);
int printEXstr(va_list val);
int printptr(va_list val);
int print_37(void);
int print_X(va_list list);
int _printf(const char * const format, ...);
int printc(va_list val);
int print_int(va_list args);
int _putchar(char c);
int printoct(va_list val);
int printstrev(va_list args);
int print_X2(unsigned int num);
char *_strcpy(char *dest, char *src);
int _printf(const char * const format, ...);
int print_int(va_list args);
int print_d(va_list args);
int _putchar(char c);
int print_unsigned(va_list args);
#endif
