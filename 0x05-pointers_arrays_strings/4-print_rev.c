#include "main.h"
/**
 *print_rev - print the string reversed
 * @s: string
* Return: Returns the string length
 */

void print_rev(char *s)
{
int i = 0;
while (s[i])
{
i++;
}
while (i--)
{
_putchar(s[i] + 0);
}
_putchar('\n');
}
