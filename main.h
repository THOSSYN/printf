#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _putchar(char c);
int _printf(const char *format, ...);
size_t len(char *str);
int int_out(int first_arg, char sign, int base, char *buffer);
int _vprintf(const char *format, va_list first_arg);
int iTB(unsigned int num);
int iTO(unsigned int num);
int iTH(unsigned int num);
int iTh(unsigned int num);

#endif /* MAIN_H */
