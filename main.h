#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>
#include <stdlib.h>

int print_%(void);
int printEXstr(va_list val);
void print_x2(unsigned long int num);
int printstrev(va_list args);
void print_X2(unsigned int long num);
int printbinary(va_list val);
int printc(va_list val);
int printoct(va_list val);
int _putchar(char c);
int printptr(va_list val);

int _printf(const char *format, ...);
void print_X(va_list list);
void print_x(va_list list);
void print_o(va_list list);
void print_u(va_list list);
void print_all(const char * const format, ...);
void print_string(va_list list, char *sep);
void print_float(va_list list, char *sep;);
void print_int(va_list list, char *sep);
int _putchar(char c);
char *rot13(char *string);
void print_rev(char *s);
char *_strcpy(char *dest, char *src);
void print_strings(const char *separator, const unsigned int n, ...);


#endif
