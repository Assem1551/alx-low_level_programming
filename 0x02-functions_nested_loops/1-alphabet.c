#include <stdio.h>
/**
* main - prints alpabet
 * Return: Returns 0
*/
void print_alphabet(void);

int main(void)
{
print_alphabet();
return (0);
}
void print_alphabet(void)
{
int ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
putchar(ch);
}
putchar('\n');

}