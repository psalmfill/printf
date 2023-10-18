#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
/**
  * struct specifiers - Struct specifiers
  * @specifier: The conversion specifier
  * @f: The function pointer
  */
typedef struct specifiers
{
	char *specifier;
	int (*f)(va_list args);
} spc_dt;

int _putchar(char c);
int _printf(const char *format, ...);
int printf_char(va_list list);
int printf_str(va_list list);
int printf_porc(va_list list);
int printf_digit(va_list list);
int printf_reversed(va_list list);
int aux(int arg);
int (*get_function(char c))(va_list a);
#endif /* MAIN */
