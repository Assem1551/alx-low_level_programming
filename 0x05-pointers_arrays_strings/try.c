#include <stdio.h>

int main (int *a, int *b)
{
    printf ("%p %p ,",a,b);

int* temp = a;
a=b ; 
b= temp;






printf ("%p %p %p,",temp,a,b);

}