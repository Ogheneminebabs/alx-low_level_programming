#include <stdio.h>
#include <limits.h>

/**
 *main - Main function of my program
 *
 *
 *Return: Always 0 (success)
 */

int main(void)

{
int a;
long int b;
long long int c;
char d;
float t;

printf("Size of an int: %lu byte(s)\n", sizeof(a));
printf("Size of a long int: %lu byte(s)\n", sizeof(b));
printf("Size of a long long int: %lu byte(s)\n", sizeof(c));
printf("Size of a char: %lu byte(s)\n", sizeof(d));
printf("Size of a float: %lu byte(s)\n", sizeof(t));
return (0);

}
