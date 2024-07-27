#include<stdio.h>

/* %d is a signed integer, while %u is an unsigned integer. 
Pointers (when treated as numbers) are usually non-negative.
 If you actually want to display a pointer, use the %p format specifier. */

void main()
{
    int a[4]={10,20,30,40};
    printf("%d",a[1]);
}