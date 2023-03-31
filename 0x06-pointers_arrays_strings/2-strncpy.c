#include "main.h"

/**
* _strncpy - prints alpabet
 * n - the intger
 * dest - string1
 * src - string2
 * Return: Returns dest
*/

char *_strncpy(char *dest, char *src, int n)
{
int i;
/*
* n - the intger
 * dest - string1
 * src - string2
 */
for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);

}
