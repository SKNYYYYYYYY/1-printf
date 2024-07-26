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
//	int len, len2;
	char *str1, *str2;
  long int j;

    j = 12345678901;

//	len = _printf("Let's try to printf a simple sentence.\n");
//	len2 = printf("Let's try to printf a simple sentence.\n");

	_printf("print character %c and %c\n", 'a', '%');
	printf("print character %c and %c\n", 'a', '%');

	str1 = "Newton";
	str2 = "Abel";
	_printf("print string %s and %s\n", str1, str2);
	printf("print string %s and %s\n", str1, str2);

	_printf("Printed characters (custom): %i\n", j);
	_printf("Printed characters (custom): %d\n", j);
	_printf("Printed by _printf hexa with d: %d\n", 0xa);
	printf("Printed characters (standard): %i\n", j);
	printf("Printed characters (standard): %d\n", j);
	printf("Printed by printf hexa with d: %d\n", 0xa);
	_printf("Printed characters (standard): %i\n", 0xa);
	printf("Printed characters (standard): %i\n", 0xa);
    
    return (0);
}
