#include "main.h"

/**
* _strcmp - prints alpabet
 *@s1:  string 2
 *@s2:  string1
 * Return: Returns 1 if true and 0 if false
*/

int _strcmp(char *s1, char *s2)
{
int equal = 0;

while (*s1)
{

if (*s1 != *s2)
{
equal = ((int)*s1 - 48) - ((int)*s2 - 48);
break;
}
s1++;
s2++;
}
return (equal);
}
