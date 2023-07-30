#include "main.h"
/**
*print_last_digit - function that print last digit of a number
*@d: number to print from
*Return: 0
*/
int print_last_digit(int d)
{
int lastdigit = d % 10;
if (lastdigit < 0)
lastdigit *= -1;

_putchar (lastdigit + '0');
return (lastdigit);
}
