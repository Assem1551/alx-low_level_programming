#include "main.h"
/**
 *_puts - swap 2 ints
 * @str: string
* Return: Returns the string length
 */

char *_strcat(char *dest, char *src)
{
int ln_dest = 0 ,ln_src = 0;
while (a[ln_dest])
{
    ln_dest++;
}
while (b[ln_src])
{
    ln_src++;
}
int ln_total= ln_dest + ln_src;
char c [ln_total];
int i;
int j;

for (i = 0 ; i <= ln_dest ;i++)
{ 
c [i] = a[i];
}

for (j = 0; j <= ln_b ; j++)
{
c[ln_a + j]= b[j];
}
return (c);




}
