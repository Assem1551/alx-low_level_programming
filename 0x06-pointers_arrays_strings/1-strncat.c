#include "main.h"
/**
 *_strcat - swap 2 ints
 * dest: string
 * src: string
* Return: Returns the string length
 */

char *_strncat(char *dest, char *src, int n)
{
int c, c2;
c = 0;
while (dest[c])
{
c++;
}

for (c2 = 0 ; c2 < n && src[c] != '\0' ; c2++)
{
dest [c + c2] = src [c2];
}
dest [c+c2] = '\0';


return (dest);

}
