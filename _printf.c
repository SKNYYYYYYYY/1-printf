#include "main.h"

/**
* _printf - function that produces output according to a format.
* @format: is a character string composed of zero or more directives.
* handled conversion specifiers:
*   - c
*   - s
*   - %
*
* Return: the number of characters printed.
*/

int _printf(const char *format, ...)
{
	va_list args;
	int i;

	int printed_chars = 0;
	
	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
			{
				va_end(args);
				return (-1);
			}
			switch (format[i])
			{
				case 'c':
					printed_chars += c_specifier(args);
					break;
				case 's':
					printed_chars += s_specifier(args);
					break;
				case '%':
					printed_chars += modulo_specifier(args);
					break;
				case 'd':
					printed_chars += d_specifier(args);
					break;
				case 'i':
					printed_chars += i_specifier(args);
					break;
				case 'b':
					printed_chars += b_specifier(args);
					break;
				case 'u':
					printed_chars += u_specifier(args);
					break;
				case 'o':
					printed_chars += o_specifier(args);
					break;
				case 'x':
					printed_chars += x_specifier(args);
					break;
				case 'X':
					printed_chars += X_specifier(args);
					break;
				default:
					printed_chars += _putchar('%');
					printed_chars += _putchar(format[i]);
					break;
				
			}
		}
		else
		{
			printed_chars += _putchar(format[i]);
		}
	}
	va_end(args);
	return (printed_chars);
}
