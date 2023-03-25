#include "main.h"

/**
 * print_alphabet- print the albhabets 10 times
 *
 */
void print_alphabet(void)
{
int i,j;
for ( j = 0; j <=9; j++ )
{
for (i = 97 ; i <= 122; i++)
{
_putchar(i);
}
}
_putchar('\n');

}
