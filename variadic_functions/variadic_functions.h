#ifndef VARIADIC_FUNC_H
#define VARIADIC_FUNC_H

#include <stdio.h>
#include <stdarg.h>

/**
 * struct format - Formats
 *
 * @symbol: symbol
 * @f: function pointer
 */
typedef struct format
{
  char symbol;
  void (*f)(va_list);
} format_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
