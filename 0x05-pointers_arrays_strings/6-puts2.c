#include <stdio.h>

/**
 * puts2 - function should print only one character out of two
 * Starting with the first one
 * @str: input
 * Return: string
 */

void puts2(char *str)
{
int i = 0;

for (; str[i] != '\0'; i++)
{
if ((1 % 2) == 0)
putchar(str[i]);
else
continue;
}
putchar('\n');
}
