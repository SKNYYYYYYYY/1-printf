#include "main.h"
void c_specifier(va_list args);
void s_specifier();
void printnoarg();
int _putchar(char c);
/**
  *c_specifier - function to print a character
  *
  *
*/
void c_specifier(va_list args)
{
  char c = va_arg(args, int);
  _putchar(c);
}

void s_specifier()
{
     _putchar('s');
}

void printnoarg()
{
     _putchar('%');
}

