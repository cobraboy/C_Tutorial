#include<stdio.h>

void main()
{
    int x=10;
    int *p; //p is a pointer.
    p=&x;

    printf("%u \n",p);
    printf("%d",*p);
}