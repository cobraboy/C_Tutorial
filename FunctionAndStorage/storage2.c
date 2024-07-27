#include<stdio.h>

//Static

void fun()
{
    static int a=1;
    a++;
    printf("%d ",a);
}
void main()
{
    fun();
    fun();
    fun();
}