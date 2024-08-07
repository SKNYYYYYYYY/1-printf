#include <limits.h>
#include <stdio.h>
#include "../main.h"

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
	printf("\n");

	_printf("_print string %s and %s\n", str1, str2);
	printf("print string %s and %s\n", str1, str2);
	printf("\n");

	_printf("_Print returned length: %i\n", len);
	printf("Print returned length: %i\n", len2);
	printf("\n");

	_printf("_Print integer: %i\n", j);
	printf("Print integer: %i\n", j);
	printf("\n");

	_printf("_Print decimal: %d\n", j);
	printf("Print decimal: %d\n", j);
	printf("\n");

	_printf("_print hexa with d: %d\n", 0xa);
	printf("_print hexa with d: %d\n", 0xa);
	printf("\n");

	_printf("_Print hexa with i: %i\n", 0xa);
	printf("Print hexa with i: %i\n", 0xa);
	printf("\n");

	_printf("_Print hexa with i: %i\n", 0xa);
	printf("Print hexa with i: %i\n", 0xa);
    printf("\n");

	_printf("_Print binary with b: %b\n", 2);   
	printf("\n");

	_printf("_Print unsigned decimal  with u: %u\n", 987423892);  
	printf("_Print unsigned decimal  with u: %u\n", 987423892);  
	printf("\n");

	_printf("_Print unsigned decimal  with u: %u\n", 0xd);  
	printf("_Print unsigned decimal  with u: %u\n", 987423892);  
	printf("\n");

	_printf("octal - _Print unsigned decimal  with u: %u\n", 075);  
	printf(" octal -_Print unsigned decimal  with u: %u\n", 075);  
	printf("\n");

	_printf("octal - _Print unsigned decimal  with o: %o\n", 4095);  
	printf(" octal -_Print unsigned decimal  with o: %o\n", 4095);  
	printf("\n");

	_printf("Hex - _Print Hex decimal   with x: %x\n", 0xa);  
	printf(" Hex -_Print Hex decimal  with x: %x\n", 0xa);  
	printf("\n");

	_printf("Hex - _Print Hex decimal   with X: %X\n", 26);  
	printf(" Hex -_Print Hex decimal  with X: %X\n", 26);  
	printf("\n");



    return (0);
}
