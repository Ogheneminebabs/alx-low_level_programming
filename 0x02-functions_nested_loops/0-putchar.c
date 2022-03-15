#include "main.h"

/**
 *_putchar - writes the character putchar to stdout
 * @putchar: the character to print
 *
 *
 *Return: on success 1
 * On error, -1 is returned, and errno is set appropriately
 */

int _putchar(_putchar)
{
return (write(1, &putchar, 1));
}