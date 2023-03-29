#include "main.h"
/**
 *_puts - swap 2 ints
 * @str: string
* Return: Returns the string length
 */



void _puts(char *str)
{
int i = 0;
while (str[i] != '\0')
{
_putchar(str[i] + 0);
i++;
}
_putchar('\n');
}
