#include<stdio.h>

//name of an array is the address of 1st element.

void main()
{
    int a[4]={10,20,30,40};
    printf("%u \n",a);
    printf("%u \n",a[0]);
    printf("%u \n",&a[0]);
}