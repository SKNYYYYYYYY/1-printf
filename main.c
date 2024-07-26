#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len, len2;
	char *str1, *str2;
  int j;

	str1 = "Newton";
	str2 = "Abel";
  j = 1234567890;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");

	_printf("_print character %c and %c\n", 'a', '%');
	printf("print character %c and %c\n", 'a', '%');

	_printf("_print string %s and %s\n", str1, str2);
	printf("print string %s and %s\n", str1, str2);

	_printf("_Print integer: %i\n", j);
	printf("Print integer: %i\n", j);
	_printf("_Print decimal: %d\n", j);
	printf("Print decimal: %d\n", j);
	_printf("_print hexa with d: %d\n", 0xa);
	printf("_print hexa with d: %d\n", 0xa);
	_printf("_Print hexa with i: %i\n", 0xa);
	printf("Print hexa with i: %i\n", 0xa);
    
    return (0);
}
