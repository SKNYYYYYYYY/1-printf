#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

#ifndef NULL
#define NULL ((void *)0)
#endif /* NULL */

void c_specifier(va_list args);
int s_specifier(va_list args);
void modulo_specifier(va_list args);
int _putchar(char c);
int _printf(const char *format, ...);

#endif /* MAIN_H */
