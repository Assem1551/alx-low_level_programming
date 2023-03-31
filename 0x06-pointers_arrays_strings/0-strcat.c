#include "main.h"
/**
 *_strcat - swap 2 ints
 * @dest: string
 * @src: string
* Return: Returns the string length
 */

char *_strcat(char *dest, char *src)
{
int c, c2;
c = 0;
while (dest[c])
{
c++;
}

for (c2 = 0 ; src[c2]; c2++)
{
dest [c] = src [c2];
c++;
}



return (dest);

}
