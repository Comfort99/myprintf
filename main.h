#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>
#include <stdlib.h>


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
