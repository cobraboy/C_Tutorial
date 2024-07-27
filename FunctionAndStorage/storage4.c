#include<stdio.h>

int x;
void f()
{
    x++;
    printf("%d",x);
}
void g()
{
    x++;
    printf("%d",x);
}void main()
{
    ++x;
    printf("%d",x);
}