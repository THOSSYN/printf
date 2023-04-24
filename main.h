#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _putchar(char c);
int _printf(const char *format, ...);
size_t len(char *str);
void int_out(int first_arg, int base);
void _vprintf(const char *format, va_list first_arg);


#endif /* MAIN_H */
