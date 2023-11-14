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
	int (*function)(va_list list, char length_modifier);
} convert;
char *rot13(char *string);
int printbinary(va_list val);
int printEXstr(va_list val);
int printptr(va_list val);
void print_strings(const char *separator, const unsigned int n, ...);
void print_x(va_list list, char length_modifier, int hash_flag);
char *_strcpy(char *dest, char *src);
int print_37(void);
void handle_hash_flag(int num, int hash_flag);
int print_u(va_list list, char length_modifier);
void print_X(va_list list, char length_modifier, int hash_flag);
int _printf(const char * const format, ...);
int printc(va_list val);
int print_int(va_list args);
int get_signed_length(va_list list, char length_modifier);
unsigned int get_unsigned_length(va_list list, char length_modifier);
int _putchar(char c);
int print_d(va_list list, int width, char fill);
int printoct(va_list val, char lenghth_modifier);
int printstrev(va_list args);
void print_X2(unsigned int long num);

#endif
