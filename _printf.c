#include "main.h"

/**
 * _printf - function that produces output according to a format.
 * @format: is a character string composed of zero or more directives.
 * handled conversion specifiers:
 * 	- c
 * 	- s
 * 	- %
 * 	- d
 * 	- i
 *
 * Return: the number of characters printed.
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0; 
	
	va_start(args, format);

	if (format)
	{
		while (format[i])
		{
			if(format[i] == '%')
			{
				switch (format[i+1])
				{
					case 'c':
						
						_c_specifier(va_list args); /*(ABEL) _printchar( va_arg(args, char)) */
						i=i + 2;
						break;
					case 's':
						_printstring(va_arg(args, char *));
						break;
					case '%':
						_printnoarg(va_arg(args, char));
						break;
					default:
						i++;
						continue;

				}
			}
			else
				_putchar(format[i]);

			i++;
		}

	}
	return (0);
}
