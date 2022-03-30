#include <stdio.h>

/**
 * _puts_recursion - prints a string followed by a new line
 * @*s; string to print
 *
 * Return: Always 0 (success)
 */

void _puts_recursion(char *s)
{
putchar("*s\n");
_puts_recursion(s + 1);
}
