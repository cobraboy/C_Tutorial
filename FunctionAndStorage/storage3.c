#include<stdio.h>

void fun()
{
    static int a=1; //Scope of satic only block.
    a++;
}
void main()
{
    fun();
    printf("%d",a);
}