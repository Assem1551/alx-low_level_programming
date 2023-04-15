#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Main
 * @str: input
 * Return: 0
 */
char *_strdup(char *str)
{
char *nstr;
unsigned int l, i;

/* check is str is null */
if (str == NULL)
{
return (NULL);
}

l = 0;
while (str[l] != '\0')
{
l++;
}

nstr = malloc(sizeof(char) * (l + 1));

/*check if malloc was successful*/
if (nstr == NULL)
{
return (NULL);
}

for (i = 0; i < l; i++)
{
nstr[i] = str[i];
}
nstr[l] = '\0';
return (nstr);
}
